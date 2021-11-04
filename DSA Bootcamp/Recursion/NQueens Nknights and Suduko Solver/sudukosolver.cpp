
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define inf 1e18
#define pii pair<ll, ll>
#define vi vector<ll>
#define endl "\n"
#define loop(i,a,b) for(int i = (a); i <= (b); i++)
#define revloop(i,a,b) for(int i = (b); i >= (a); i--)
#define pb push_back
#define ump unordered_map
#define dec2bin(n) std::bitset<8>(n).to_string()
#define str2int(n) std::stoi(n)
#define bin2dec(n) std::stoi(bin, nullptr, 2)
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
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
void displayboard(vector<vector<int>> &arr)
{
    for(auto row : arr)
    {
        for(auto col : row)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
bool solve(vector<vector<int>> &arr)
{
    int n = arr.size();
    int row=-1,col=-1;
    bool emptyleft=true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j]==0)
            {
                row=i;
                col=j;
                emptyleft=false;
                break;
            }
        }
        if(emptyleft==false)
        break;
    }
    if (emptyleft)
    {
        return true;
    }
    
    for (int i = 1; i <= 9; i++)
    {
        if (issafe(arr,row,col,i))
        {
            arr[row][col] = i;
            if(solve(arr))
            {
                return true;
            }
            else
            {
                arr[row][col] = 0;
            }
        }
        
    }
    return false;
}
bool issafe(vector<vector<int>> &arr,int row,int col,int num)
{
    //check for row
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[row][col] == num)
        return false;
    }
    for(auto nums : arr)
    {
        if(nums[col] == num)
        return false;
    }
    int sqrt_ = (int)sqrt(arr.size());
    int rowstart = row - row%sqrt_;
    int colstart = col - col%sqrt_;
    for (int r = rowstart; r < rowstart+sqrt_; r++)
    {
        for (int c = colstart; c < colstart+sqrt_; c++)
        {
            if (arr[r][c]==num)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    clock_t begin = clock();
    file_io();
    int n;
    cin>>n;
    vector<vector<bool>> ans(n, vector<bool>(n, false));
    //(ans, 0, 0, n);
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\n"
         << "Executed in: " << double(end - begin) / CLOCKS_PER_SEC << "ms \n";
#endif
}