#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = 0;
        int count = 0;

        // ==========================================
        // PHASE 1: Find the Potential Candidate
        // ==========================================
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        // ==========================================
        // PHASE 2: Verify the Candidate
        // ==========================================
        int actualCount = 0;
        for (int num : nums) {
            if (num == candidate) {
                actualCount++;
            }
        }

        // Check if the candidate's true frequency is > n/2
        if (actualCount > n / 2) {
            return candidate; 
        }
        
        // If it fails the check, no majority element exists.
        return -1; 
    }
};

int main() {
    Solution sol;
    
    // Test Case 1: Majority Element Exists
    vector<int> nums1 = {2, 2, 1, 1, 1, 2, 2};
    cout << "Test 1 Output: " << sol.majorityElement(nums1) << "\n"; // Output: 2
    
    // Test Case 2: NO Majority Element Exists
    vector<int> nums2 = {1, 2, 3, 1, 4};
    cout << "Test 2 Output: " << sol.majorityElement(nums2) << "\n"; // Output: -1
    
    return 0;
}