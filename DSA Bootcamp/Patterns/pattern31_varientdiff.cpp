
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n=2*n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int left,right,up,down;
            left = j,up=i,right=n-j,down=n-i;
            cout<<min({left,right,up,down})<<"   ";
        }
        cout<<endl;
    }
}
/*
n-5
0   0   0   0   0   0   0   0   0   0   0   
0   1   1   1   1   1   1   1   1   1   0
0   1   2   2   2   2   2   2   2   1   0
0   1   2   3   3   3   3   3   2   1   0
0   1   2   3   4   4   4   3   2   1   0   
0   1   2   3   4   5   4   3   2   1   0
0   1   2   3   4   4   4   3   2   1   0
0   1   2   3   3   3   3   3   2   1   0
0   1   2   2   2   2   2   2   2   1   0
0   1   1   1   1   1   1   1   1   1   0
0   0   0   0   0   0   0   0   0   0   0
*/
