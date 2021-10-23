
#include<bits/stdc++.h>
using namespace std;
#define dec2bin(n) std::bitset<8>(n).to_string()

int setbits_(int n)
{
    int count = 0,c=n;
    while (n>0)
    {
        count++;
        n-=(n&-n);
    }
    
    return count;
}

int setbits1_(int n)
{
    int count = 0,c=n;
    while (n>0)
    {
        count++;
        n=(n&(n-1));
    }
    
    return count;
}
int main()
{
    int n=10;
    cout<<dec2bin(10)<<endl;
    cout<<setbits_(n)<<endl;
    cout<<setbits1_(n);
}