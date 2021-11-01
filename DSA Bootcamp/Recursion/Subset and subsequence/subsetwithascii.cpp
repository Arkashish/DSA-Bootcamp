#include <bits/stdc++.h>
using namespace std;

void subsetwithascii(string str, string temp)
{
    if (str.size() == 0)
    {
        cout << temp << endl;
        return;
    }
    // char ch = str[i];
    subsetwithascii(str.substr(1), temp + str[0]);
    subsetwithascii(str.substr(1), temp);
    char ch = str[0] + 0;
    // cout<< " ["<<ch<<"] "<<endl;
    int num = (int)(ch);
    // string ans = temp + str[0];
    subsetwithascii(str.substr(1),temp+str[0]+to_string(num));
    // subsetwithascii(str.substr(1),temp+str[0]+char(str[0]+0));
}
void subset(string str, string temp)
{
    if (str.size() == 0)
    {
        cout << temp << endl;
        return;
    }
    // char ch = str[i];
    subset(str.substr(1), temp + str[0]);
    subset(str.substr(1), temp);
    // subsetwithascii(str,i+1,temp);
}
int main()
{
    string str = "abc";
    subsetwithascii(str, "");
}