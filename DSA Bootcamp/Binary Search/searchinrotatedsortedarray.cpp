

//Check this prog.

//Problem Link : https://leetcode.com/problems/search-in-rotated-sorted-array/

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

        if (arr[mid] == arr[start] and arr[mid] == end)
        {
            //check for whether arr[start] is pivot. if not then skip .
            if (arr[start] > arr[start + 1])
                return start;
            start++;
            if (arr[end] < arr[end - 1])
                return end - 1;
            end--;
        }
        else if (arr[start] < arr[mid] or (arr[start] == arr[mid] and arr[mid] > arr[end]))
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int binsearch(int ar[], int start, int end, int target)
{

    //int start = 0, end = n - 1;

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
    int s = pivot(arr, n);
    if (s == -1)
    {
        return binsearch(arr, 0, n - 1, t);
    }
    if (arr[s] == t)
        return s;
    if (arr[0] <= t)
        return binsearch(arr, 0, s - 1, t);
    else
        return binsearch(arr, s + 1, n - 1, t);
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

    int target;
    cin >> target;
    cout << moderator(ar, n, target) << endl;
}