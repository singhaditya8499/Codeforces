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
 ll a,b;
 cin>>a>>b;
 if((b-a)>9)
 {
  cout<<0<<"\n";
 }
 else
 {
  ll x=1;
  for(ll i=a+1;i<=b;i++)
  {
   x=x*last(i);
  }
  cout<<x%10<<"\n";
 }
}