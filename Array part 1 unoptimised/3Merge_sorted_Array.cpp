#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m;
       
       for(int num : nums2)
       {
        nums1[i]= num;
        i++;
       }

       sort(nums1.begin(), nums1.end());
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