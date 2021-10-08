#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][i];
        }
    }
    int target;
    cin>> target;
    int r=0,c=n-1;
    // vector<int> v(2,-1);
    int count=0;
    while (r<n and c>=0)
    {
        if(ar[r][c]==target)
        {
            count=1;
            cout<<r<<" "<<c<<endl;
            break;
        }
        else if(ar[r][c]<target)
        {
            r++;
        }
        else{
            c--;
        }
    }

    if(count==0)
    cout<<-1<<" "<<-1<<endl;
}

/*
I/P-
4
10 20 30 40
15 25 35 45
28 29 37 49
33 34 38 50
39
*/