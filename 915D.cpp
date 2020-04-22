#include "bits/stdc++.h"
using namespace std;
 //***********************************Functions and macros begin*************************************//
 #define pi pair<long long int,long long int>
#define pii pair<pi,long long int>
#define pb push_back
#define eb emplace_back
#define fast ios_base::sync_with_stdio
#define fast1 cin.tie(NULL)
#define mod1 1000005187
#define mp make_pair
#define SORT(x) sort(x.begin(),x.end())
#define PI 3.14159265
#define R3 1.7320508
#define R5 2.2360679
#define F first
#define S second
typedef long long int  ll;
const ll mod=1e9+7;
int phi(int n) //No of coprimes
{int result=n;for(int i=2;i*i<=n;i++)if(n%i==0){while(n%i==0) n=n/i;result-=result/i;}if(n>1) result-=result/n; return result;}
 ll mod_pow(ll base,ll e) 
{ ll ans=1; while(e){if(e&1) ans=(ans*base)%mod;base=(base*base)%mod;e>>=1;}return ans;}
 int gcd(int a,int b) //Greatest common divisior
{return b ? gcd(b,a%b) : a;}
  //*********************************** Fucntions and macros end  *************************************// 
 int n,m,cnt;
vector<int> v[508];
int chk[508];
 void dfs(int k)
{
 chk[k]=1;
 for(int i=0;i<v[k].size();i++)
 {
  if(!chk[v[k][i]])
  dfs(v[k][i]);
  else
  if(chk[v[k][i]]==1)
  cnt++;
 }
 chk[k]=2;
}
 int main()
{
 cin>>n>>m;
 for(int i=0;i<m;i++)
 {
  int u,uu;
  cin>>u>>uu;
  v[u].pb(uu);
 }
 for(int i=1;i<=n;i++)
 {
  memset(chk,0,sizeof chk);
  cnt=0;
  dfs(i);
  for(int j=0;j<=n;j++)
  {
   if(chk[j]==0)
   dfs(j);
  }
  if(cnt<=1)
  {
   cout<<"YES\n";
   return 0;
  }
 }
 cout<<"NO\n";
 }