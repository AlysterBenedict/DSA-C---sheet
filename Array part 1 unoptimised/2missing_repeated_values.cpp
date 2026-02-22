#include<bits/stdc++.h>
using namespace std;

vector<int> findMissing(vector<vector<int>>&grid)
{
    int n= grid.size();
    int N = n*n;
    vector<int> freq(N+1,0);
    
//creating the tally
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int currnum= grid[i][j];
            freq[currnum]++;
        }
    }

//checking for repeat and missing numbers
int repeat=-1;
int missing=-1;
for(int i=1;i<=N;i++)
{
    if(freq[i]==2)
    repeat=i;
    else if(freq[i]==0)
    missing=i;
}

return {repeat, missing};
}

int main()
{
    int dim;
    cout<<"Enter the dimensions of the grid : ";
    cin>>dim;
    vector<vector<int>> grid(dim, vector<int>(dim,0));
    cout<<"Enter the elements of the grid : ";
    for(int i=0; i<dim; i++)
    {
        for(int j=0;j<dim; j++)
        {
            cin>>grid[i][j];
        }
    }
    vector<int> result = findMissing(grid);
    cout<<"Repeated element : "<<result[0]<<"\n";
    cout<<"Missing element : "<<result[1]<<"\n";

}
