

#include<bits/stdc++.h>
using namespace std;
int search(int *arr,int target,int s,int e)
{
    if(s>e)
    return -1;

    int m = s + (e-s)/2;
    if(arr[m]==target) 
    {
        return m;
    }
    if(arr[s]<=arr[m])
    {
       if(target>=arr[s] and target<=arr[m]) 
       {
           return search(arr,target,s,m-1);
       }
       else
       return search(arr,target,m+1,e);
    }
    if (target>=arr[m] and target<=arr[e])
    {
        return search(arr,target,m+1,e);
    }
    else
    return search(arr,target,m+1,e);
}
int main()
{
    int arr[] = {5,6,7,8,9,1,2,3};
    cout<<search(arr,2,0,8);
}