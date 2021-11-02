
#include<bits/stdc++.h>
using namespace std;
int c=0;
void permutation(string str,int n,int i)
{
    if(i==n)
    {
        c++;
        cout<<str<<endl;
        return;
    }
    // int c=0;
    for(int j=i;j<n;j++)
    {
        swap(str[i],str[j]);
        permutation(str,n,i+1);
        swap(str[i],str[j]);
    }
}
int permutationcount(string p,string up)
{
    if(up.empty())
    {
        // cout<<p<<endl;
        return 1;
    }
    int count = 0;
    char ch = up[0];
    for (int i = 0; i <= p.length(); i++)
    {
        string f = p.substr(0,i);
        string s = p.substr(i,p.length());
        count+=permutationcount(f+s+ch,up.substr(1));
    }
    return count;

}
int main()
{
    string str = "ABCD";
    cout<<"Count: "<<permutationcount("",str)<<"\n";
}