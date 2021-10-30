#include<bits/stdc++.h>
using namespace std;

void skipaaword(string str,int i, string ans,string word,string fin_ans)
{
    if(i==str.size())
    {
        if(ans==word)
        cout<<fin_ans;
        else
        cout<<fin_ans<<ans;
        return;
    }
    if(str[i]!=' ')
    {
        ans+=str[i];
        skipaaword(str,i+1,ans,word,fin_ans);
    }
    else
    {
        if(ans!=word)
        {
            fin_ans+=ans;
            skipaaword(str,i+1,"",word,fin_ans+" ");
        }
        else{
            skipaaword(str,i+1,"",word,fin_ans);
        }
    }
}
int main()
{
    string s="He is as great as";
    string word="as";
    skipaaword(s,0,"",word,"");
}