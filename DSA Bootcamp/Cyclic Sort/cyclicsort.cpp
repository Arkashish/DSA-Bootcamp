
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int i=0;
    while (i<n)
    {
        if(ar[i]==i+1)
            i++;
        else{
            swap(ar[i],ar[ar[i]-1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<< " ";
    }
    cout<<endl;
    
    
}