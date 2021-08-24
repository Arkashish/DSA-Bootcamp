
//Problem Link: https://leetcode.com/problems/split-array-largest-sum/
#include <bits/stdc++.h>
using namespace std;

int splitArray(vector<int> &nums, int m)
{
    int n = nums.size();
    int start = 0, end =0 ;

    for(int i=0;i<n;i++)
    {
        start = max(start,nums[i]);
        end+=nums[i];
    }

    while(start<end)
    {
        int mid = start + (end-start)/2;
        int sum=0,pieces=1;
        for(auto it:nums)
        {
            if(sum+it > mid)
            {
                sum=it;
                pieces++;
            }
            else{
                sum+=it;
            }
        }
        if(pieces>m)
        start = mid+1;
        else
        end = mid; 
    }
    return end;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    int m;
    cin>>m;
    cout<<splitArray(nums,m)<<"\n";
}