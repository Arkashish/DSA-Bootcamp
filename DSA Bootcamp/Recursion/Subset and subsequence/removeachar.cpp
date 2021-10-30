#include<bits/stdc++.h>
using namespace std;

void remove_(string str,int i,string ans,char k)
{
    if(i==str.size())
    {
        cout<<ans<<endl;
        return;
    }

    if(str[i]==k)
    remove_(str,i+1,ans,k);
    else
    remove_(str,i+1,ans+str[i],k);
    // return;
}
int main()
{
    string str= "abaccad";
    remove_(str,0,"",'a');
    
}