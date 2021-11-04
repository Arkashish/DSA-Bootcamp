
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
bool issafe(vector<vector<int>> &arr,int row,int col,int n)
{
    //upper column check
    for(int i=row-1;i>=0;i--)
    {
        if(arr[i][col])
        return false;
    }
    for (int i = row-1,j=col-1; i>=0 and j>=0 ; i--,j--)
    {
        if(arr[i][j])
        return false;
    }
    for (int i = row-1,j=col+1; i>=0 and j<n ; i--,j++)
    {
        if(arr[i][j])
        return false;
    }
    return true;
    
}
void display(vector<vector<int>> &arr,int row,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j])
            cout<<"Q ";
            else
            cout<<". ";
        }
        cout<<endl;        
    }
    
}   
int countnqueens(vector<vector<int>> &arr,int r,int n)
{
    if(r==n)
    {
        display(arr,r,n);
        cout<<"\n";
        return 1;
    }
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if(issafe(arr,r,i,n))
        {
            arr[r][i] = 1;
            c = c+ countnqueens(arr,r+1,n);
            arr[r][i] = 0;
        }
    }
    return c;
}
int main()
{
    clock_t begin = clock();
    file_io();
    int n;
    cin>>n;
    vector<vector<int>> ans(n,vector<int>(n,0));
    cout<<"The total number possible is: "<<countnqueens(ans,0,n);

#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\n"
         << "Executed in: " << double(end - begin) / CLOCKS_PER_SEC << "ms \n";
#endif
}