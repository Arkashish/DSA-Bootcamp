
#include<bits/stdc++.h>
using namespace std;
void sumarray(int *arr,int n)
{
    if(n==0)    
    return;
    int temp[n-1];
    for(int i=0;i<n-1;i++)
    {
        temp[i] = arr[i]+arr[i+1];
    }
    sumarray(temp,n-1);
    for (int i = 0; i < n; i++)
    {
        if(i==n-1)
            cout<<arr[i]<<" ";
        else
        {
            cout<<arr[i]<<",";
        }        
    }
    cout<<endl;
    
}
int main()
{
    int n;
    cin>>n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    cout<<"\n\n";
    sumarray(v,n);
}