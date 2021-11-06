
#include<bits/stdc++.h>
using namespace std;

int lengthofstr(string s,int i)
{
    if(s[i]=='\0')
    return i;
    return lengthofstr(s,i+1);
}
int length1(char* str)
{
    if(*str=='\0')
    return 0;
    return 1+length1(str+1);
}
int main() {
	string s;
	cin>>s;
	cout<<"Lenght is: "<<lengthofstr(s,0)<<endl;
    char *str="Arkashish";
    cout<<"Length by another method: "<<length1(str);
	return 0;
}