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
        int min_price= INT_MAX;

        for(int i = 0; i< n; i++)
        {
            min_price= min(min_price, prices[i]);
            max_profit = max(max_profit, (prices[i] - min_price));

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