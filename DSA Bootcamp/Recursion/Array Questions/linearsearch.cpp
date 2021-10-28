
#include<bits/stdc++.h>
using namespace std;

bool targetfinder_linearsearch(int *arr,int target,int i)
{
    if(i==8)
    return false;

    if(arr[i]==target)
    return true;
    targetfinder_linearsearch(arr,target,i+1);
}
//kunal code
bool targetfinder_linearsearchbyk(int *arr,int target,int i)
{
    if(i==8)
    return false;

    
    return (arr[i]==target) or targetfinder_linearsearch(arr,target,i+1);;
    
}
int main()
{
    int arr[]={1,2,4,6,18,2,29,0};
    cout<<targetfinder_linearsearch(arr,18,0)<<endl;
    cout<<targetfinder_linearsearchbyk(arr,18,0);
}