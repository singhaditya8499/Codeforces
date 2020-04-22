//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#define mod 1000000007
using namespace std;
 typedef long long ll;
ll solve(ll x,ll n)
{
 if(n==1)
 {
  return x%mod;
 }
 if(n%2==0)
 {
  ll tmp=solve(x,n/2);
  return (tmp%mod*tmp%mod)%mod;
 }
 return (x%mod*solve(x,n-1)%mod)%mod;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;
 cin>>n;
 string s;
 cin>>s;
 int a=0,b=0,g=0,t=0;
 for(int i=0;i<n;i++)
 {
  if(s[i]=='A')
   a++;
  if(s[i]=='C')
   b++;
  if(s[i]=='G')
   g++;
  if(s[i]=='T')
   t++;
 }
 int ma=max(a,max(b,max(g,t)));
 int cnt=0;
 if(a==ma)
  cnt++;
 if(b==ma)
  cnt++;
 if(g==ma)
  cnt++;
 if(t==ma)
  cnt++;
 ll ans=solve(cnt,n);
 cout<<ans<<"\n";
}