
#include<bits/stdc++.h>
using namespace std;

void pattern(int n,int i)
{
    if(i<n)
    {
        cout<<"* ";
        pattern(n,i+1);
    }
    else if(i==n)
    {
        cout<<endl;
        pattern(n-1,0);
        return;
    }
}
void pattern1_diffapproach(int n,int i)
{
    if(n==0)
    return;
    if(i<n)
    {
        cout<<"* ";
        pattern1_diffapproach(n,i+1);
    }
    else{
        cout<<endl;
        pattern1_diffapproach(n-1,0);
    }
}
void pattern2(int n,int i)
{
    if(n==0)
    return;
    if(i<n)
    {
        pattern2(n,i+1);
        cout<<"* ";
    }
    else{
        pattern2(n-1,0);
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pattern(n,0);
    cout<<endl;
    pattern1_diffapproach(n,0);
    cout<<endl;
    pattern2(n,0);
}