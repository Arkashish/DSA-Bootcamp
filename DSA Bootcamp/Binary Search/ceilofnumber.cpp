

#include<iostream>
using namespace std;

int binsearchceil(int ar[],int n,int target)
{
    
    int start = 0,end = n-1;
    if(target < ar[start] or target > ar[end])
        return -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(ar[mid]==target)
            return target;
        else if(ar[mid]>target)
            end = mid-1;
        else
            start = mid+1;
    }
    return ar[start];
}
int binsearchfloor(int ar[],int n,int target)
{
    int start = 0,end = n-1;
    if(target > ar[end] or target < ar[start])
        return -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(ar[mid]==target)
            return target;
        else if(ar[mid]>target)
            end = mid-1;
        else
            start = mid+1;
    }
    return ar[end];
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
    cout<<binsearchceil(ar,n,target)<<"\n";
    cout<<binsearchfloor(ar,n,target);

}