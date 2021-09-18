
#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=n;i>=0;i--)
    {
        for(int j=n-i;j>0;j--)
            cout<<"   ";
        for(int k=1;k<=i;k++)
            cout<<" * ";
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    pattern(n);
}