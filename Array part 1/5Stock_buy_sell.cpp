#include<bits/stdc++.h>
using namespace std;

/**
 * Problem: Best Time to Buy and Sell Stock (Single Transaction)
 * Logic: We iterate through the prices once, keeping track of the minimum price 
 * seen so far. For each day, we calculate the potential profit if we sold on 
 * that day (current price - min_price) and update the maximum profit.
 * 
 * Time Complexity: O(n) - Single pass through the array.
 * Space Complexity: O(1) - Using only a few extra variables.
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        // If there are fewer than 2 days, no transaction (buy and sell) is possible.
        if(n < 2){
            return 0;
        }

        int max_profit = 0;
        int min_price = INT_MAX; // Tracks the lowest price encountered so far.

        for(int i = 0; i < n; i++) 
        {
            // Update min_price if the current day's price is lower.
            min_price = min(min_price, prices[i]);
            
            // Calculate potential profit for today and update max_profit if it's higher.
            max_profit = max(max_profit, (prices[i] - min_price));
        }
        
        return max_profit;
    }
};

int main()
{
    int days;
    cout << "Enter the number of days : ";
    cin >> days; 
    
    // Check for valid number of days to avoid empty vector issues.
    if (days <= 0) {
        cout << "The maximum profit = 0" << endl;
        return 0;
    }

    vector<int> prices(days);
    cout << "Enter the stock prices for " << days << " days : ";
    for(int i = 0; i < days; i++)
    {
        cin >> prices[i];
    }

    Solution s;
    cout << "The maximum profit = " << s.maxProfit(prices) << endl;
    
    return 0;
}