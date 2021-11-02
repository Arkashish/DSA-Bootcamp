
//Problem Link - https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include <bits/stdc++.h>
using namespace std;
vector<string> v;
void pad(string p, string up)
{
    if (up.empty())
    {
        v.push_back(p);
        cout << p << endl;
        return;
    }

    int digit = up[0] - '0';
    for (int i = (digit - 1) * 3; i < digit * 3; i++)
    {
        char ch = (char)('a' + i);
        pad(p + ch, up.substr(1));
    }
}
int main()
{
    pad("", "12");

    cout<<"\nNow from vector: ";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}