#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 typedef long long ll;
ll gcd(ll a,ll b)
{
 if(b==0)
  return a;
 return gcd(b,a%b);
}
int main()
{
 string s;
 cin>>s;
 int cnt0=0,cnt1=0;
 for(int i=0;i<s.length();i++)
 {
  if(s[i]=='-')
   cnt1++;
  else
   cnt0++;
 }
 if(cnt0==0||cnt1%cnt0==0)
  cout<<"YES\n";
 else
  cout<<"NO\n";
}