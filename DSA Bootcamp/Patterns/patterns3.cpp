


#include<iostream>
using namespace std;

void pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>=0;j--)
            cout<<"* ";
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    pattern(n);
}