
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define inf 1e18
#define pii pair<ll, ll>
#define vi vector<ll>
#define endl "\n"
#define loop(i,a,b) for(int i = (a); i <= (b); i++)
#define revloop(i,a,b) for(int i = (b); i >= (a); i--)
#define pb push_back
#define ump unordered_map
#define dec2bin(n) std::bitset<8>(n).to_string()
#define str2int(n) std::stoi(n)
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
int main() {
	//Question : Given an array which contains number ehich are repeated 3 times each except for one number which has no repititions.Find the number without using extra space.Preferably using concept of bits
    //I/P - 10
    //      2 2 3 2 7 7 8 7 8 8
    //o/p - 3
	int n;
    cin>>n;
    vector<int> ar(n);
    char buffer [33];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
        // std::string binary = std::bitset<8>(ar[i]).to_string();
        std::string binary = dec2bin(ar[i]);
        // cout<<binary<<endl;
        // sum+=std::stoi(binary);
        sum+=str2int(binary);
    }
    //   std::string binary = std::bitset<8>(n).to_string();
    cout<<endl<<sum<<endl;
    int copy = sum;
    int d=0,r=0;
    while (copy>0)
    {
        d=copy%10;
        r=r*10+(d%3);
        copy/=10;
    }
    cout<<r<<endl;
    int ans = reversDigits(r);
    cout<<ans<<endl;
    string s = std::to_string(ans);
    std::string bin(s);
    int dec = std::stoi(bin, nullptr, 2);
    cout<<"Final ans: "<<dec;
    // cout<<std::setbase(10)<<reversDigits(r);
	return 0;

   
}
// cout<<itoa (ar[i],buffer,2)<<endl;
// sum+=(int)(itoa (i,buffer,2));
//cout<<sum<<" ";
// cout<<sum<<" ";