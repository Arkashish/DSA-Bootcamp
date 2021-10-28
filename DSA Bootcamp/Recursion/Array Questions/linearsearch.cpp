
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

    
    return (arr[i]==target) or targetfinder_linearsearch(arr,target,i+1);
    
}
//to return the aarray indices with repitition in a vector
vector<int> linesearch(int *arr,int target,int i)
{
    static vector<int> v;
    if(i==8)
    return v;

    if(arr[i]==target)
    v.push_back(i);

    vector<int> ans = linesearch(arr,target,i+1);
    return ans;
}
int main()
{
    int arr[]={1,2,4,6,18,2,29,0};
    cout<<targetfinder_linearsearch(arr,18,0)<<endl;
    cout<<targetfinder_linearsearchbyk(arr,18,0)<<endl;
    vector<int> v = linesearch(arr,2,0);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}