#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
void dfs(int x,int even,int odd,int cur[],int fut[],vector<int> v[],vector<int> &ans,int h,int parent)
{
 // visit[x]=1;
 if(h%2==1)
 {
  if(odd%2==1)
  cur[x]=1-cur[x];
 }
 if(h%2==0&&even%2==1)
 {
  cur[x]=1-cur[x];
 }
 if(cur[x]!=fut[x])
 {
  ans.push_back(x);
  for(int i=0;i<v[x].size();i++)
  {
   if(h%2==0&&v[x][i]!=parent)
   {
    dfs(v[x][i],even+1,odd,cur,fut,v,ans,h+1,x);
   }
   if(h%2==1&&parent!=v[x][i])
   {
    dfs(v[x][i],even,odd+1,cur,fut,v,ans,h+1,x);
   }
  }
 } 
 else
 {
  for(int i=0;i<v[x].size();i++)
  {
   if(v[x][i]!=parent)
   {
    dfs(v[x][i],even,odd,cur,fut,v,ans,h+1,x);
   }
  }
 }
}
int main()
{
 int n;
 cin>>n;
 vector<int> v[n+1];
 for(int i=0;i<n-1;i++)
 {
  int a,b;
  cin>>a>>b;
  v[a].push_back(b);
  v[b].push_back(a);
 }
 int visit[n+1];
 memset(visit,0,sizeof visit);
 int cur[n+1];
 for(int i=1;i<=n;i++)
  cin>>cur[i];
 int fut[n+1];
 for(int i=1;i<=n;i++)
  cin>>fut[i];
 vector<int> ans;
 visit[1]=1;
 dfs(1,0,0,cur,fut,v,ans,0,0);
 cout<<ans.size()<<"\n";
 for(int i=0;i<ans.size();i++)
  cout<<ans[i]<<"\n";
 // cout<<endl;
}