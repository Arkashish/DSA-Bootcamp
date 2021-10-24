
#include<bits/stdc++.h>
using namespace std;

double sqrt_(double n)
{
    double x =n,root;
    while (true)
    {
        root = 0.5 * (x+(n/x));

        if(abs(root-x)<1)
        break;
        x=root;
    }
    return root;
}
int main()
{
    cout<<sqrt_(40)<<endl;
}