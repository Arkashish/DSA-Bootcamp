
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //naive approach with very high time complexity
    cout<<pow(2,n-1)<<endl;
    //fastest approach
    cout<<(1<<(n-1))<<endl;

}