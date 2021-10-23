
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==0 || n==1)
    cout<<"NO"<<endl;
    else
    cout<<((n&(n-1))==0)<<endl;

}