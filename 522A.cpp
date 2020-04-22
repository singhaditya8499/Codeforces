#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
using namespace std;
 typedef unsigned long long ull;
void dfs(int pos,int cnt,int visit[],vector<int> v[],int &ans)
{
 if(visit[pos]==1)
 {
  return;
 }
 cnt++;
 ans=max(ans,cnt);
 visit[pos]=1;
 for(int i=0;i<v[pos].size();i++)
 {
  if(!visit[v[pos][i]])
   dfs(v[pos][i],cnt,visit,v,ans);
 }
 visit[pos]=0;
}
int main()
{
 int n;
 cin>>n;
 string a,b,c;
 unordered_map<string,int> m;
 int cnt=0;
 vector<int> v[401];
 for(int i=0;i<n;i++)
 {
   cin>>a>>b>>c;
  transform(a.begin(),a.end(),a.begin(),::toupper);
  transform(c.begin(),c.end(),c.begin(),::toupper);
  if(m.find(a)==m.end())
  {
   m[a]=cnt++;
  }
  if(m.find(c)==m.end())
  {
   m[c]=cnt++;
  }
  v[m[c]].push_back(m[a]);
 }
 int visit[cnt];
 for(int i=0;i<cnt;i++)
  visit[i]=0;
 int ans=0;
 for(int i=0;i<cnt;i++)
 {
  if(visit[i]==0&&v[i].size()>0)
  {
   dfs(i,0,visit,v,ans);
  }
 }
 cout<<ans<<"\n";
}