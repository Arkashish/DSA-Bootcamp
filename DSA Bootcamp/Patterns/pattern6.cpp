
#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int k;
    for(int i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            cout<<"   ";
        }
        for(int j=0;j<=n-k;j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    pattern(n);
}