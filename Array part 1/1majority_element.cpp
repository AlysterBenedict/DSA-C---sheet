// Moore's voting algorithm

#include<bits/stdc++.h> // Includes all standard libraries (IO, vector, etc.)
using namespace std;    // Standard namespace to avoid typing std::

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0; // Stores the current potential majority element
        int count = 0;     // Stores the vote count (or "life") of the candidate

        // Range-based for loop to iterate through every number in the vector
        for(int num : nums)
        {
            // CASE 1: No current candidate
            // If count is 0, the previous candidate was completely cancelled out.
            // We pick the current number as the new candidate.
            if(count == 0)
                candidate = num;

            // CASE 2: Voting
            // If the current number matches our candidate, it gains a 'life' (vote).
            if(num == candidate)
                count++;
            
            // CASE 3: Cancellation
            // If the current number is different, it 'kills' one instance of the candidate.
            else
                count--;
        }
        
        // Since the problem guarantees a majority element exists, 
        // the candidate remaining is the answer.
        return candidate;
    }
};

int main()
{
    Solution s;
    int n,num;
    cout<<"enter the size of the array : ";
    cin>>n; 
    vector<int> nums;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>num;
    nums.push_back(num);
    }
    cout<<"Majority element is "<<s.majorityElement(nums);
}

// time complexity O(N)
//Space complexity O(1)
