#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
 int solve(char c)
{
 int tmp;
 if(c>='0'&&c<='9')
 {
  tmp=c-'0';
 }
 else if(c>='a'&&c<='z')
 {
  tmp=36+(c-'a');
 }
 else if(c>='A'&&c<='Z')
 {
  tmp=10+(c-'A');
 }
 else if(c=='-')
  tmp=62;
 else tmp=63;
 return tmp;
}
 int main()
{
 string s;
 cin>>s;
 ll ans=1;
 for(int i=0;i<s.length();i++)
 {
  ll x=solve(s[i]);
  // cout<<x<<"\n";
  for(int j=0;j<6;j++)
  {
   if((x&(1<<j))==0)
    ans=(ans*3)%mod;
  }
 }
 cout<<ans<<"\n";
}