//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#define mod 1000000007
using namespace std;
 typedef long long ll;
ll modd(ll a,ll n)
{
 if(n==0)
  return 1;
 if(n==1)
  return a;
 if(n%2==0)
 {
  ll x=modd(a,n/2);
  return (x*x)%10;
 }
 return (a*modd(a,n-1))%10;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 ll b,k;
 cin>>b>>k;
 ll sum=0;
 for(int i=k-1;i>=0;i--)
 {
  ll x;
  cin>>x;
  sum+=modd(b,i)*x;
  sum=sum%10;
 }
 if(sum%2)
  cout<<"odd\n";
 else
  cout<<"even\n";
}