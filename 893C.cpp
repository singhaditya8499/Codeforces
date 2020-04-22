#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<stack>
#include<set>
using namespace std;
//**************//
typedef unsigned long long ull;
//**************//
int ans=1;
ull cnt1=0,cnt0=0;
void dfs(int pos,int visit[],vector<int> v[],ull &ma,ull arr[])
{
 ma=min(ma,arr[pos]);
 visit[pos]=1;
 for(int i=0;i<v[pos].size();i++)
 {
  if(!visit[v[pos][i]])
  {
   dfs(v[pos][i],visit,v,ma,arr);
  }
 }
}
int main()
{
 int n,m;
 cin>>n>>m;
 vector<int> v[n+1];
 ull arr[n+1];
 for(int i=1;i<=n;i++)
  cin>>arr[i];
 for(int i=0;i<m;i++)
 {
  int a,b;
  cin>>a>>b;
  v[a].push_back(b);
  v[b].push_back(a);
 }
 int visit[n+1];
 for(int i=0;i<=n;i++)
  visit[i]=0;
 ull ans=0;
 for(int i=1;i<=n;i++)
 {
  if(!visit[i])
  {
   ull tmp=1e12;
   dfs(i,visit,v,tmp,arr);
   ans+=tmp;
  }
 }
 cout<<ans;
}