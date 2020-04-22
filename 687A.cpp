#include<iostream>
#include<unordered_map>
#include<vector>
#include<utility>
#include<queue>
#include<stack>
#include<set>
 using namespace std;
void solve(int x,int color[],vector<int> v[],int &ans,int c)
{
 queue<int> q;
 q.push(x);
 color[x]=c;
 while(!q.empty())
 {
  int s=q.size();
  while(s--)
  {
   x=q.front();
   q.pop();
   for(int i=0;i<v[x].size();i++)
   {
    if(color[v[x][i]]==color[x])
    {
     ans=0;
     return;
    }
    if(color[v[x][i]]!=-1)
     continue;
    color[v[x][i]]=1-color[x];
    q.push(v[x][i]);
   }
  }
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
 int color[n+1];
 for(int i=0;i<=n;i++)
  color[i]=-1;
 int ans=1;
 for(int i=1;i<=n;i++)
 {
  if(color[i]==-1)
  {
   solve(i,color,v,ans,1);
  }
 }
 int cnt1=0,cnt2=0;
 for(int i=1;i<=n;i++)
 {
  if(color[i]==0)
   cnt1++;
  else
   cnt2++;
 }
 if(ans==0)
 {
  cout<<-1<<"\n";
  return 0;
 }
 cout<<cnt1<<"\n";
 for(int i=1;i<=n;i++)
  if(color[i]==0)
   cout<<i<<" ";
 cout<<"\n";
 cout<<cnt2<<"\n";
 for(int i=1;i<=n;i++)
  if(color[i]==1)
   cout<<i<<" ";
}