
//Program to count the number of paths in a maze from start till end
#include <bits/stdc++.h>
using namespace std;

int countpaths(int r, int c)
{
    if (r == 1 || c == 1)
        return 1;

    int left = countpaths(r - 1, c);
    int right = countpaths(r, c - 1);
    return left + right;
}
//when only up and down movement is allowed
void printpaths(string p,int r, int c)
{
    if (r == 1 and c == 1)
    {
        cout<<p<<endl;
        return;
    }
    if(r>1)
    printpaths(p+"D",r - 1, c);
    if(c>1)
    printpaths(p+"R",r, c - 1);
    // return left + right;
}
//now for down right and diagonal movement
void printpathsdia(string p,int r, int c)
{
    if (r == 1 and c == 1)
    {
        cout<<p<<endl;
        return;
    }
    if(r>1)
    printpathsdia(p+"D",r - 1, c);
    if(c>1)
    printpathsdia(p+"R",r, c - 1);
    
    if(r>1 and c>1)
    printpathsdia(p+"d",r-1,c-1);
}
int main()
{
    int r, c;
    cin >> r >> c;
    int ans = countpaths(r, c);
    cout<<ans<<endl;
   // printpaths("",r,c);
    cout<<"\n"<<endl;
    printpathsdia("",r,c);
}