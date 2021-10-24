
#include <bits/stdc++.h>
using namespace std;

double sqrt_(int n, int p)
{
    int s = 0, e = n;
    double root = 0.0;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (m * m <= n)
        {

            if (m * m == n)
            {
                root = m;
                return root;
            }
            root = m;
            s = m + 1;
        }
        else if (m * m > n)
        {
            e = m - 1;
        }
    }
    cout << "\nThe value of root is: " << root << endl;
    double incr = 0.1;
    int c = 0;
    for (int i = 0; i < p; i++)
    {
        while (root * root <= n)
        {
            c++;
            root += incr;
        }
        root -= incr;
        incr /= 10;
    }
    cout << "\nNumber of iterations: " << c << endl;
    return root;
}
int main()
{
    int n;
    cin >> n;

    int lo = 0, hi = n;
    int pos = 0;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (mid * mid <= n)
        {
            pos = mid;
            lo = mid + 1;
        }
        else if (mid * mid > n)
            hi = mid - 1;
        // else
        //     lo=mid+1;
    }
    cout << pos << endl;
    cout << "\n Priting upto p decimal places so enter value of p and see magic: " << endl;
    int p; //with precision
    cin >> p;
    cout << "\nThe square root of the number is: " << sqrt_(n, p) << endl;
}