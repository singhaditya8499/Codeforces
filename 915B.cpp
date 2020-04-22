#include "bits/stdc++.h"
using namespace std;
 //***********************************Functions and macros begin*************************************//
 #define pi pair<int,int>
#define pii pair<pi,int>
#define pb push_back
#define fast ios_base::sync_with_stdio
#define fast1 cin.tie(NULL)
#define mod1 1000005187
#define mp make_pair
#define SORT(x) sort(x.begin(),x.end())
#define PI 3.14159265
#define R3 1.7320508
#define R5 2.2360679
typedef long long int  ll;
const ll mod=1e9+7;
int phi(int n) //No of coprimes
{int result=n;for(int i=2;i*i<=n;i++)if(n%i==0){while(n%i==0) n=n/i;result-=result/i;}if(n>1) result-=result/n; return result;}
 ll mod_pow(ll base,ll e) 
{ ll ans=1; while(e){if(e&1) ans=(ans*base)%mod;base=(base*base)%mod;e>>=1;}return ans;}
 int gcd(int a,int b) //Greatest common divisior
{return b ? gcd(b,a%b) : a;}
  //*********************************** Fucntions and macros end  *************************************// 
 int main()
{
 int n,pos,l,r;
 cin>>n>>pos>>l>>r;
 int ans=0;
 if(l==1&&r==n)
 {
  ans=0;
 }
 else if(pos>=l&&pos<=r)
 {
  if(l==1)
  {
   ans=r-pos+1;
  }
  else if(r==n)
  {
   ans=pos-l+1;
  }
  else
  {
   ans=min(pos-l,r-pos)+r-l+2;
  }
 }
 else
 {
  if(pos<l)
  {
   if(r==n)
   {
    ans=l-pos+1;
   }
   else
   ans=l-pos+1+r-l+1; 
  } 
  else
  {
   if(l==1)
   {
    ans=pos-r+1;
   }
   else
   ans=pos-r+1+r-l+1;
  }
 }
 cout<<ans<<"\n";
}