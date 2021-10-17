#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<=n;i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(c%2==0)
            cout<<(char)(97+c)<<" ";
            else 
            cout<<(char)(65+c)<<" ";
            c++;
        }
        cout<<"\n";
        
    }
}