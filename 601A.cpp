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
 int road[410][410];
int track[410][410];
void dfs(int pos,int visit[],int loop[],int &ans,vector<int> v[])
{
 } 
int main()
{
 int n,m;
 cin>>n>>m;
 for(int i=0;i<m;i++)
 {
  int a,b;
  cin>>a>>b;
  track[a][b]=1;
  track[b][a]=1;
 }
 int dist[n+1],visit[n+1];
 for(int i=0;i<=n;i++)
  dist[i]=0,visit[i]=0;
 queue<int> q;
 q.push(1);
 visit[1]=1;
 while(!q.empty())
 {
  int u=q.front();
  q.pop();
  for(int i=1;i<=n;i++)
  {
   if(!visit[i]&&track[u][i]!=track[1][n])
   {
    visit[i]=1;
    q.push(i);
    dist[i]=dist[u]+1;
   }
  }
 }
 if(dist[n])
  cout<<dist[n]<<"\n";
 else
  cout<<-1<<"\n";
}