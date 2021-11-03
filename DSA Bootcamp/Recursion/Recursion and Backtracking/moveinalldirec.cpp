
//Prog for printing the paaths when movemnet is allowedin all directiions
#include <bits/stdc++.h>
using namespace std;
void printpaths(string p, int r, int c, vector<vector<int>> &arr)
{
    if (r == arr.size() - 1 and c == arr[0].size() - 1)
    {
        cout << p << endl;
        return;
    }

    if (arr[r][c] == 0)
        return;

    arr[r][c] = 0;
    if (r < arr.size() - 1)
        printpaths(p + "D", r + 1, c, arr);
    if (c < arr[0].size() - 1)
        printpaths(p + "R", r, c + 1, arr);
    // return left + right;
    if (r > 0)
        printpaths(p + "U", r - 1, c, arr);
    if (c > 0)
        printpaths(p + "L", r, c - 1, arr);

    arr[r][c] = 1;
}

// This part also prints the part of the path with matrix
void printpathswithmatrix(string p, int r, int c, vector<vector<int>> &arr, vector<vector<int>> &path, int step)
{
    if (r == arr.size() - 1 and c == arr[0].size() - 1)
    {
        cout << p << endl;
        for (int i = 0; i < path.size(); i++)
        {
            for (int j = 0; j < path[0].size(); j++)
            {
                cout<<path[i][j]<<" ";
            }
            cout<<endl;            
        }
        cout<<endl;
        return;
    }

    if (arr[r][c] == 0)
        return;

    arr[r][c] = 0;
    path[r][c] = step;
    if (r < arr.size() - 1)
        printpathswithmatrix(p + "D", r + 1, c, arr, path, step + 1);
    if (c < arr[0].size() - 1)
        printpathswithmatrix(p + "R", r, c + 1, arr, path, step + 1);
    // return left + right;
    if (r > 0)
        printpathswithmatrix(p + "U", r - 1, c, arr, path, step + 1);
    if (c > 0)
        printpathswithmatrix(p + "L", r, c - 1, arr, path, step + 1);

    arr[r][c] = 1;
    path[r][c] = 0;
}
int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> v(r, vector<int>(c, 0));
    vector<vector<int>> path(r, vector<int>(c, 0));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }
    // printpaths("", 0, 0, v);
    printpathswithmatrix("",0,0,v,path,1);
}