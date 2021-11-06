
#include<bits/stdc++.h>
using namespace std;

char checkupper(string s,int i=0)
{
    if(s[i]=='\0')
    return 0;
    if(isupper(s[i]))
    return s[i];
    return checkupper(s,i+1);
}
int main()
{
    string s;
    cin>>s;
    cout<<checkupper(s,0);
}