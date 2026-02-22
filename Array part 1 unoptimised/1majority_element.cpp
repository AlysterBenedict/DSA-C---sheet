#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Map to store frequency: <Number, Count>
        unordered_map<int, int> frequencyMap;
        
        int n = nums.size();
        int majorityCount = n / 2;

        for (int num : nums) {
            // 1. Increment the count for the current number
            frequencyMap[num]++;
            
            // 2. Check if this number has crossed the majority threshold
            if (frequencyMap[num] > majorityCount) {
                return num; // Found the majority element
            }
        }
        
        return -1; // Should not reach here if majority element is guaranteed
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << sol.majorityElement(nums) << endl; 
    return 0;
}