#include<bits/stdc++.h>
#include<unordered_map>
#define mod 998244353
using namespace std;
 typedef long long ll;
  int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 ll n;
 cin>>n;
 ll ans=0,prev=1,first=n;
 for(int i=1;i<=n-1;i++)
 {
  ans=(ans%mod+(prev*(n+1-i))%mod)%mod;
  prev=(prev%mod*(n+1-i)%mod)%mod;
 }
 for(int i=1;i<=n;i++)
 {
  first=(first%mod*i%mod)%mod;
 }
 first=first-ans;
 if(first<0)
  first=first+mod;
 cout<<first<<"\n";
}