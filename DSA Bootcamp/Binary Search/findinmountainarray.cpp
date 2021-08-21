
#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(int arr[], int n)
{
    // int n = arr.size();
    int start = 0, end = n - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int binsearch(int ar[], int start, int end, int target)
{

    //int start = 0, end = n - 1;
    if (target < ar[start] or target > ar[end])
        return -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (ar[mid] == target)
            return mid;
        else if (ar[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int moderator(int arr[], int n, int t)
{
    int ans;
    int s = peakIndexInMountainArray(arr,n);
    ans = binsearch(arr,0,s,t);
    if(ans==-1)
        ans = binsearch(arr,s,n,t);

    return ans;
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
    cout<<moderator(ar,n,target)<<endl;
}