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
 int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
//*********************************** Fucntions and macros end  *************************************// 
vector<int> arr[101];
int bfs(int ar[],int u)
{
 ar[u]=1;
 queue<int> q;
 q.push(u);
 while(!q.empty())
 {
  int xx=q.front();
  q.pop();
  for(int i=0;i<arr[xx].size();i++)
  {
   if(ar[arr[xx][i]]==0)
   {
    ar[arr[xx][i]]=ar[xx]+1;
    q.push(arr[xx][i]); 
   }
  }
 }
}
int main()
{
 int n,m;
 cin>>n>>m;
 int a[n][m];
 int ans[n][m];
 memset(ans,-1,sizeof ans);
 vector<pi> aa;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   cin>>a[i][j];
   if(a[i][j]==0)
   {
    for(int k=0;k<m;k++)
    ans[i][k]=0;
    for(int k=0;k<n;k++)
    ans[k][j]=0;
   }
   else
   {
    aa.pb(mp(i,j));
   }
  }
 }
 int anss=1;
 for(int i=0;i<aa.size();i++)
 {
  int find=0;
  for(int k=0;k<m;k++)
  {
   if(ans[aa[i].first][k]==-1)
   {
    find=1;
    break;
   }
  }
  for(int k=0;k<n;k++)
  {
   if(ans[k][aa[i].second]==-1)
   {
    find=1;
    break;
   }
  }
  if(find==0)
  {
   cout<<"NO";
   return 0;
  }
 }
 cout<<"YES\n";
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  cout<<(ans[i][j]==0?"0 ":"1 ");
  cout<<endl;
 }
}