
#include<bits/stdc++.h>
using namespace std;

vector<int> find(int ar[],int n,int target)
{
    vector<int> v(2,-1);
    int start = 0,end = n-1;
    int pos = INT_MAX ;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(ar[mid]==target)
        {
            pos=mid;
            end = mid-1;
        }
        else if(ar[mid]>target)
            end = mid-1;
        else
            start = mid+1;
    }
    if(pos!=INT_MAX)
        v[0]=pos;
    start = 0,end = n-1;
    pos = INT_MAX ;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(ar[mid]==target)
        {
            pos=mid;
            start = mid+1;
        }
        else if(ar[mid]>target)
            end = mid-1;
        else
            start = mid+1;
    }
    if(pos!=INT_MAX)
        v[1]=pos;
    //return ar[start];
    return v;
}
int  main()
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
    vector<int> ans = find(ar,n,target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    
}