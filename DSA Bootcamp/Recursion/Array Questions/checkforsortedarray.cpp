
#include<bits/stdc++.h>
using namespace std;
//my version
bool checkforsorted(int *arr,int i)
{
    if(i==5 || i+1==5)
    return true;

    if(arr[i]>arr[i+1])
    return false;
    checkforsorted(arr,i+1);
    
}
//kunal's version
bool checkforsortedbyk(int arr[],int i)
{
    if(i==5)
    return true;

    return arr[i]<arr[i+1] and checkforsortedbyk(arr,i+1);
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    cout<<checkforsorted(arr,0)<<endl;
    cout<<checkforsortedbyk(arr,0)<<endl;
}