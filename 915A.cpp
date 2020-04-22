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
 int n,k;
 cin>>n>>k;
 vector<int> v;
 for(int i=0;i<n;i++)
 {
  int x;
  cin>>x;
  v.pb(x);
 }
 sort(v.begin(),v.end());
 int ans=0;
 for(int i=n-1;i>=0;i--)
 {
  if(k%v[i]==0)
  {
   ans=k/v[i];
   break;
  }
 }
 cout<<ans<<"\n";
}