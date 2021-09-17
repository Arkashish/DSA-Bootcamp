

#include<iostream>
using namespace std;

void pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<"\n";
    }
    for(int i=1;i<n;i++)
    {
        for(int j=n-i-1;j>=0;j--)
            cout<<"* ";
        cout<<"\n";
    }
}
//another version
void pattern_2(int n)
{
    for(int i=1;i<=2*n;i++)
    {
        if(i<=n){
        for(int j=1;j<=i;j++)
            cout<<" * ";
        cout<<"\n";}
        else
        {
            for (int j = i; j < 2*n; j++)
            {
                cout<<" * ";
            }
            cout<<"\n";
            
        }
        
    }
}
int main()
{
    int n;
    cin>>n;
    pattern_2(n);
}