#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int ptr1 = m-1;
       int ptr2 = n-1;
       int place_ptr = m + n -1;
    
       while(ptr1>=0 && ptr2>=0)
       {
        if(nums1[ptr1] > nums2[ptr2])
        {
            nums1[place_ptr] = nums1[ptr1];
            place_ptr--;
            ptr1--;
        }
        else
        {
            nums1[place_ptr] = nums2[ptr2];
            place_ptr--;
            ptr2--;
        }
       }
       while(ptr2>=0)
       {
        nums1[place_ptr]= nums2[ptr2];
        place_ptr--;
        ptr2--;
       }
    }

};

int main()
{
    int m, n, total;
    cout<<"Enter the size of the first array: ";
    cin>>m;
    cout<<"Enter the size of the second array: ";
    cin>>n;
    vector<int> nums1(m+n,0);
    vector<int> nums2(n);
    cout<<"Enter the "<<m<<" elements of the first array: ";
    for(int i=0;i<m;i++)
    {
        cin>>nums1[i];
    }
        cout<<"Enter the "<<n<<"elements of the second array: ";
        for(int i=0;i<n;i++)
    {
        cin>>nums2[i];

    }

    Solution s;

    s.merge(nums1,m,nums2,n);
    cout<<"The merged sorted array : ";
    for(int num : nums1)
    {
        cout<<num<<" ";
    }
}