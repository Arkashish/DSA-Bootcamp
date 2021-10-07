
#include<bits/stdc++.h>
using namespace std;

int binsearch(int ar[],int target,int start,int end)
{
    
    // int start = 0,end = 1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(ar[mid]==target)
            return mid;
        else if(ar[mid]>target)
            end = mid-1;
        else
            start = mid+1;
    }
    return -1;
} 

int ans(int ar[],int target)
{
    int start = 0,end = 1;
    while(target > ar[end])
    {
        int temp = end+1;
        end = end + (end-start+1)*2;//box size
        start = temp;
    }
    return binsearch(ar,target,start,end);
}

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    int target;
    cin>>target;
    cout<<ans(ar,target)<<endl;
}