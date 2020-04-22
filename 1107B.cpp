//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#define mod 1000000007
using namespace std;
 typedef long long ll;
int find(int x,int father[])
{
 if(father[x]==x)
  return x;
 return father[x]=find(father[x],father);
}
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t;
 cin>>t;
 while(t--)
 {
  ll n,k;
  cin>>n>>k;
  ll ans=n*9;
  ans=ans-(9-k);
  cout<<ans<<"\n";
 }
 }