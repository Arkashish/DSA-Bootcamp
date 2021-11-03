
#include <bits/stdc++.h>
using namespace std;
void printpaths(string p, int r, int c, vector<vector<int>> &arr)
{
    if (r == arr.size()-1 and c == arr[0].size()-1)
    {
        cout << p << endl;
        return;
    }
    if (arr[r][c] == 0)
        return;
    if (r < arr.size()-1)
        printpaths(p + "D", r + 1, c, arr);
    if (c < arr[0].size()-1)
        printpaths(p + "R", r, c + 1, arr);
    // return left + right;
}
int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> v(r, vector<int>(c, 0));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }
    printpaths("", 0, 0, v);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}