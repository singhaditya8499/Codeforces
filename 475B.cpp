#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<stack>
#include<set>
#include<utility>
using namespace std;
 //**************//
typedef unsigned long long ull;
//**************//
int n;
void dfs(int a,int col,int b,int visit[],vector<pair<int,int> > v[],set<int> &s)
{
 if(a==b)
 {
  s.insert(col);
  return;
 }
 visit[a]=1;
 for(int i=0;i<v[a].size();i++)
 {
  if(!visit[v[a][i].first]&&col==v[a][i].second)
   dfs(v[a][i].first,col,b,visit,v,s);
 }
 visit[a]=0;
}
int solve(int a,int b,vector<pair<int,int> > v[])
{
 int visit[n+1];
 for(int i=0;i<=n;i++) visit[i]=0;
 visit[a]=1;
 set<int> s;
 for(int i=0;i<v[a].size();i++)
 {
  if(s.find(v[a][i].second)==s.end())
  {
   dfs(v[a][i].first,v[a][i].second,b,visit,v,s);
  }
 }
 return s.size();
}
int main()
{
 int n,m;
 cin>>n>>m;
 string a,b;
 cin>>a>>b;
 if(a[0]=='>'&&a[a.length()-1]=='<'&&b[b.length()-1]=='v'&&b[0]=='^')
 {
  cout<<"YES\n";
 }
 else if(a[0]=='<'&&a[a.length()-1]=='>'&&b[0]=='v'&&b[b.length()-1]=='^')
 {
  cout<<"YES\n";
 }
 else
  cout<<"NO\n";
}