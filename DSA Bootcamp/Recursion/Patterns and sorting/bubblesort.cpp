
#include<bits/stdc++.h>
using namespace std;

void bubblesort(int *arr,int i,int j)
{
    if(i==0)
    return;

    if(j<i)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]); 
        }
        bubblesort(arr,i,j+1);
    }
    else
    {
        bubblesort(arr,i-1,0);
    }
}
int main()
{
    int n;
    cin>>n;
    int *ar = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    bubblesort(ar,n-1,0);
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    

    
}