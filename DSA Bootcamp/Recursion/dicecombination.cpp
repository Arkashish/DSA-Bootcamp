
#include<bits/stdc++.h>
using namespace std;

void dice(string p,int target)
{
    if(target==0)
    {
        cout<<p<<endl;
        return;
    }
    int num;
    for(int i=1;i<=6;i++)
    {
        if(i>target)
        continue;
        dice(p+(char)(i+48),target-i);
    }
}
int main()
{
    dice("",4);
}