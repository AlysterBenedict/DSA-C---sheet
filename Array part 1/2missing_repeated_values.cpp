#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingNumber(vector<vector<int>> & grid)
{
    int n = grid.size();
    int total = n*n; //total elements in the grid

    vector<int> freq(total+1,0); //initialze freq array to count the occurances of this grid

    for(int i=0;i<n;i++)  //loop through the grid
    {
        for(int j=0;j<n;j++)
        {
            int currnumber= grid[i][j];
            freq[currnumber]++;  //starts from 1(occurance is directly input from index 1)
        }
    }

    int missing = -1;
    int repeat = -1;

    for(int i=1;i<=total; i++) //loop through the freq array to check the count of occurances
    {
        if(freq[i]==2)
        repeat = i;
        else if(freq[i] == 0)
        missing = i;
    }

    return {repeat, missing};
}

int main()
{
    int dim;
    cout<<"Enter the dimensions of the vector : ";
    cin>>dim;
    vector<vector<int>> grid (dim, vector<int> (dim,0));  //initialize vector of vectors (i.e grid) of this dim
    cout<<"enter the elements of the grid";
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim; j++)
        {
            cin>>grid[i][j];
        }
    }
    vector<int> result = findMissingNumber(grid);
    cout<<"repeated : "<<result[0]<<"\n";

    cout<<"missing : "<<result[1]<<"\n";
}