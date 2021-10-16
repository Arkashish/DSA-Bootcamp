#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	int n;
	cin>>n;
	int c=1;
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=i;j++)
	    {
	       if((i%2!=0 and i==j) or (i%2!=0 and j%2!=0) or (i%2==0 and j%2==0))
	       cout<<1<<" ";
	       else
	       cout<<0<<" ";
	    }
	    cout<<endl;
	   
	}
	return 0;
}
