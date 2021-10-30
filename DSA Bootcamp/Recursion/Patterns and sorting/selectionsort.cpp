
#include <bits/stdc++.h>
using namespace std;

//Arka's code
void selectionsort(vector<int> &arr, int n, int i, int pos, int max_)
{
    if (n == 0)
        return;
    // static int max_ = INT_MIN;
    // int pos = 0;
    if (i < n)
    {
        if (max_ < arr[i])
        {
            max_ = arr[i];
            pos = i;
        }
        selectionsort(arr, n, i + 1, pos, max_);
    }
    else
    {
        swap(arr[pos], arr[n - 1]);
        selectionsort(arr, n - 1, 0, 0, INT_MIN);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    selectionsort(v, n, 0, 0, INT_MIN);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}