#include "bits/stdc++.h"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
 //***********************************Functions and macros begin*************************************//
 #define pi pair<long int,long int>
#define pii pair<pi,long long int>
#define pb push_back
#define fast ios_base::sync_with_stdio
#define fast1 cin.tie(NULL)
#define mod1 1000005187
#define mod2 1000000000+7
#define mp make_pair
#define SORT(x) sort(x.begin(),x.end())
#define PI 3.14159265
#define R2 1.41421356
#define R3 1.7320508
#define R5 2.2360679
#define F first
#define S second
#define mem(x,val) memset(x,val,sizeof x)
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> OST;
typedef long long int  ll;
const ll mod=1e9+7;
int phi(int n) //No of coprimes
{int result=n;for(int i=2;i*i<=n;i++)if(n%i==0){while(n%i==0) n=n/i;result-=result/i;}if(n>1) result-=result/n; return result;}
 ll mod_pow(ll base,ll e,ll mod) 
{ ll ans=1; while(e){if(e&1) ans=(ans*base)%mod;base=(base*base)%mod;e>>=1;}return ans;}
 int gcd(long int a,long int b) //Greatest common divisior
{return b ? gcd(b,a%b) : a;}
 int dx[] = {1,-1,0,0,1,1,-1,-1};
int dy[] = {0,0,1,-1,-1,1,-1,1};
//*********************************** Fucntions and macros end  *************************************// 
 int main()
{
 int n;
 cin>>n;
 if(n==1)
 {
  cout<<0;
  return 0;
 }
 ll arr[n];
 for(int i=0;i<n;i++)
 cin>>arr[i];
 sort(arr,arr+n);
 ll pp2[n];
 pp2[0]=1;
 for(int i=1;i<n;i++)
 {
  pp2[i]=(2*pp2[i-1])%mod;
 }
 ll ans=0;
 for(int i=0;i<n;i++)
 {
  ans+=(pp2[i]-pp2[n-i-1])*arr[i]%mod;
  ans%=mod;
 }
 if(ans<0)
 ans+=mod;
 cout<<ans;
}