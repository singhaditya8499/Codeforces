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
 int q;
 cin>>q;
 while(q--)
 {
  ll a,b,c;
  cin>>a>>b>>c;
  ll ans;
  if(b%c==0)
   ans=b+c;
  else
  {
   ans=((b/c)+1)*c;
  }
  if(c<a&&c>0)
   ans=min(ans,c);
  cout<<ans<<"\n";
 } 
}