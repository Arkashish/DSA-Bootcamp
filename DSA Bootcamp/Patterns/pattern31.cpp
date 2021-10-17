
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c=n;
    n=2*n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            int left,right,up,down;
            left = j-1,up=i-1,right=n-j-1,down=n-i-1;
            cout<<c-min({left,right,up,down})<<"   ";
        }
        cout<<endl;
    }
}
