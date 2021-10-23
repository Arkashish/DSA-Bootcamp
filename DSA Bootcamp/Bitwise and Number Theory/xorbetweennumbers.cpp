
#include<bits/stdc++.h>
using namespace std;

int xorprob(int a)
{
    if(a%4==0)
    return a;
    else if (a%4==1)
    return 1;
    else if (a%4==2)
    return a+1;
    else if (a%4==3)
    return 0;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<(xorprob(a-1)^xorprob(b)); // a-1 is done because a is included
}
