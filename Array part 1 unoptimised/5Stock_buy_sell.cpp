#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n<2){
            return 0;
        }

        
        int max_profit = 0;
        for(int i=0; i< n-1; i++)
        {
            for(int j=i+1; j< n; j++)
            {
                max_profit = max(max_profit, (prices[j]- prices[i]));

            }
        }return max_profit;
    }
    
};

int main()
{
    int days;
    cout<<"Enter the number of days : ";
    cin>>days;
    vector<int> prices(days);
    cout<<"Enter the stock prices for "<<days<<" days : ";
    for(int i=0; i<days; i++)
    {
        cin>>prices[i];
    }
    Solution s;
    cout<<"The maximum profit = "<<s.maxProfit(prices);
return 0;
}