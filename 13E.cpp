#include "bits/stdc++.h"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
 //***********************************Functions and macros begin*************************************//
 #define pi pair<long long int,long long int>
#define pii pair<pi,long long int>
#define pb push_back
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
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> OST;
typedef long long int  ll;
const ll mod=1e9+7;
int phi(int n) //No of coprimes
{int result=n;for(int i=2;i*i<=n;i++)if(n%i==0){while(n%i==0) n=n/i;result-=result/i;}if(n>1) result-=result/n; return result;}
 ll mod_pow(ll base,ll e,ll mod) 
{ ll ans=1; while(e){if(e&1) ans=(ans*base)%mod;base=(base*base)%mod;e>>=1;}return ans;}
 int gcd(int a,int b) //Greatest common divisior
{return b ? gcd(b,a%b) : a;}
  //*********************************** Fucntions and macros end  *************************************// 
int nex[100005],moves[100005],arr[100005];
int sqrtn=500,n,m;
void find(int x)
{
 int k,cnt;
 if(x+arr[x]>n)
 {
  k=x;
  cnt=0;
 }
 else if(x/sqrtn<(x+arr[x])/sqrtn)
 {
  k=x+arr[x];
  cnt=1;
 }
 else
 {
  k=nex[x+arr[x]];
  cnt=1+moves[x+arr[x]];
 }
 nex[x]=k;
 moves[x]=cnt;
}
int main()
{
 //int n,m;
 scanf("%d%d",&n,&m);
 for(int i=1;i<=n;i++)
 scanf("%d",&arr[i]);
 for(int i=n;i>=1;i--)
 {
  find(i);
 }
 while(m--)
 {
  int t;
  scanf("%d",&t);
  if(!t)
  {
   int a,b;
   scanf("%d%d",&a,&b);
   arr[a]=b;
   int q=a/sqrtn;
   int s=max(1,q*sqrtn);
   for(int i=a;i>=s;i--)
   find(i);
  }
  else
  {
   int a;
   scanf("%d",&a);
   int movess=1;
   int k=a;
   while(k+arr[k]<=n)
   {
    movess+=moves[k];
    k=nex[k];
   }
   printf("%d %d\n",k,movess);
  }
 }
}