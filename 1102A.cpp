#include<bits/stdc++.h>
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
 ll n;
 cin>>n;
 ll p=n/2;
 if(n==1)
  cout<<1<<"\n";
 else if(n==2)
 {
  cout<<1<<"\n";
  }
 else if(n==3)
 {
  cout<<0<<"\n";
 }
 else
 {
  if(p%2==0&&n%2==0)
   cout<<0<<"\n";
  else if(p%2==0&&n%2==1)
   cout<<1<<"\n";
  else if(p%2==1&&n%2==0)
   cout<<1<<"\n";
  else
   cout<<0<<"\n";
 }
}