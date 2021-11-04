
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define inf 1e18
#define pii pair<ll, ll>
#define vi vector<ll>
#define endl "\n"
#define loop(i, a, b) for (int i = (a); i <= (b); i++)
#define revloop(i, a, b) for (int i = (b); i >= (a); i--)
#define pb push_back
#define ump unordered_map
#define dec2bin(n) std::bitset<8>(n).to_string()
#define str2int(n) std::stoi(n)
#define bin2dec(n) std::stoi(bin, nullptr, 2)
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
void file_io()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

bool isvalid(vector<vector<bool>> &arr, int row, int col, int n)
{
    if (row >= 0 and row < n and col >= 0 and col < n)
        return true;

    return false; 
}
bool issafe(vector<vector<bool>> &arr, int row, int col, int n)
{
    //upper column check
    if (isvalid(arr, row - 2, col - 1, n))
    {
        if (arr[row - 2][col - 1])
            return false;
    }
    if (isvalid(arr, row - 2, col + 1, n))
    {
        if (arr[row - 2][col + 1])
            return false;
    }
    if (isvalid(arr, row - 1, col - 2, n))
    {
        if (arr[row - 1][col - 2])
            return false;
    }
    if (isvalid(arr, row - 1, col + 2, n))
    {
        if (arr[row - 1][col + 2])
            return false;
    }
    return true;
}
void display(vector<vector<bool>> &arr, int row, int col, int n)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j])
                cout << "K ";
            else
                cout << ". ";
        }
        cout << endl;
    }
}
void countknights(vector<vector<bool>> &arr, int r, int c, int n)
{
    if (r == n)
    {
        display(arr, r, c, n);
        return;
    }
    if (r == n - 1 and c == n)
        return;
    if (c == n)
    {
        countknights(arr, r + 1, 0, n);
        return;
    }
    if (issafe(arr, r, c, n))
    {
        arr[r][c] = true;
        countknights(arr, r, c + 1, n - 1);
        arr[r][c] = false;
    }
    countknights(arr, r, c + 1, n);
}
int main()
{
    clock_t begin = clock();
    file_io();
    // cout<<"Welcome to Arkashish's Template";
    int n;
    cin >> n;
    vector<vector<bool>> ans(n, vector<bool>(n, false));
    countknights(ans, 0, 0, n);
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\n"
         << "Executed in: " << double(end - begin) / CLOCKS_PER_SEC << "ms \n";
#endif
}