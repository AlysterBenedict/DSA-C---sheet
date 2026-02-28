#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
    unordered_map<int,int> freq;
    for(int num : nums)
    {
        freq[num]++;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(freq[nums[i]] == 1)
        return nums[i];
    }
    }
    return -1;
};
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements (every element appears twice except for one): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    int result = sol.singleNumber(nums);
    
    if (result != -1) {
        cout << "The single number is: " << result << endl;
    } else {
        cout << "No single number found." << endl;
    }

    return 0;
}


// int main() {
//     vector<int> nums = {4, 1, 2, 1, 2};
//     unordered_map<int, int> freq;

//     // 1. Populate the map
//     for (int num : nums) {
//         freq[num]++;
//     }

//     // 2. Print the Hash Map
//     cout << "--- Hash Map Contents ---\n";
    
//     // Using modern C++ Structured Bindings [key, value]
//     // 'const auto&' ensures we read the data efficiently without making copies
//     for (const auto& [key, value] : freq) {
//         cout << "Key (Number): " << key << "  |  Value (Frequency): " << value << "\n";
//     }
    
//     cout << "-------------------------\n";

//     return 0;
// }