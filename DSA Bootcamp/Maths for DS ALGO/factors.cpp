
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //O(n)
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
    }
    cout<<"\nOptimised: ";
    //O(sqrt(n))
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0){
            //to avoid duplicates as in case of a number which is  aperfet square like 36 so 6 will be repeaated
            if(n/i==i)
            cout<<i<<" ";
        }
        else 
        cout<< i << " " << (n/i)<< " ";
    }
}