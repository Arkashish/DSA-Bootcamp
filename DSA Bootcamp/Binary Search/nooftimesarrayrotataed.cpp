



#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid < end and arr[mid] > arr[mid + 1]) //mid < end is used to check such that the mid does not exceed the end value
        {
            return mid;
        }
        if (arr[mid] < arr[mid - 1] and mid > start) //similarly in this case it checl if mid> start else it will go onto check start-1
        {
            return mid - 1;
        }
        if (arr[mid] <= arr[start])
            end = mid - 1;
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int findcount(int arr[],int n)
{
    int p = pivot(arr,n);
    if(p==-1)
        return 0;
    return p+1;
}

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

   
    cout<<"Rotated "<<findcount(ar,n)<<" times"<<"\n";
}