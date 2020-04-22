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
 int n;
 cin>>n;
 string s;
 cin>>s;
 int ans=0;
 int a[26]={0};
 for(int i=0;i<s.length();i++)
 {
  if(i%2==0)
  {
   a[s[i]-'a']++; 
  }
  else
  {
   if(a[s[i]-'A']==0)
   ans++;
   else
   a[s[i]-'A']--; 
  } 
 }
 cout<<ans;
}