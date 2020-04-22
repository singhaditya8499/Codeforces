#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 typedef long long ll;
 int last(ll x)
{
 return x%10;
}
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 ll n;
 cin>>n;
 set<ll> s;
 for(int i=1;i<sqrt(n);i++)
 {
  if(i==1)
  {
   s.insert((n*(n+1))/2);
   s.insert(1);
  }
  else
  {
   if(n%i==0)
   {
    ll an=1+(n/i-1)*i;
    s.insert(((1+an)*(n/i))/2);
    an=1+(i-1)*(n/i);
    s.insert(((1+an)*(i))/2);
    }
  }
 }
 ll sqr=sqrt(n);
 if(sqr*sqr==n)
 {
  ll an=1+(sqr-1)*sqr;
  s.insert(((1+an)*(sqr))/2);
 }
 set<ll>::iterator it;
 for(it=s.begin();it!=s.end();it++)
  cout<<*it<<" ";
 cout<<endl;
}