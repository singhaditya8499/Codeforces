#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<set>
using namespace std;
 typedef unsigned long long ull;
void dfs(int pos,vector<int> v[],int visit[],ull &a,ull &b)
{
 visit[pos]=1;
 a++;
 b=b+v[pos].size();
 for(int i=0;i<v[pos].size();i++)
 {
  if(!visit[v[pos][i]])
   dfs(v[pos][i],v,visit,a,b);
 }
} 
int main()
{
 int n,m;
 cin>>n>>m;
 vector<int> v[n+1];
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
 for(int i=1;i<=n;i++)
 {
  if(!visit[i])
  {
   ull cntv=0,cnte=0;
   dfs(i,v,visit,cntv,cnte);
   if(cnte!=(cntv*(cntv-1)))
   {
    cout<<"NO";
    return 0;
   }
  }
 }
 cout<<"YES\n";
}