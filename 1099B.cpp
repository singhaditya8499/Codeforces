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
 if(n==1)
 {
  cout<<2<<"\n";
  return 0;
 }
 if(n==2)
 {
  cout<<3<<"\n";
  return 0;
 }
 if(n==3)
 {
  cout<<4<<"\n";
  return 0;
 }
 ll x=sqrt(n);
 ll y=x*x;
 int one=1;
 if(y==n)
 {
  cout<<2*x<<"\n";
  return  0;
 }
 if((n-y)<=x)
 {
  cout<<2*x+1<<"\n";
 }
 else
 {
  cout<<2*x+2<<"\n";
 }
}