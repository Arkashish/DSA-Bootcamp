#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n<=1)
    return 0;

    int i=2;
    while(i*i<=n)
    {
        if(n%i==0)
        return 0;
        i++;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Normal method: ";
    for (int i = 0; i < n; i++)
    {
        if(prime(i))
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Improved Version(using seiveoferatosthenes): "<<endl;
    vector<bool> primes(n+1,false);
    //false value is considered to be prime
    for (int i = 2; i*i <= n; i++)
    {
        if(!primes[i])
        {
            for(int j=i*2;j<=n;j+=i)
            {
                primes[j]=true;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if(!primes[i])
        cout<<i<<" ";
    }
    
    
}