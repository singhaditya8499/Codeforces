#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 vector<int> v[n+1];
 int level[n+1]={0};
 for(int i=1;i<=n;i++)
 {
  int x;
  cin>>x;
  if(x==-1)
  {
   level[i]=1;
  }
  else
  {
   v[x].push_back(i);
  }
 }
 int visit[n+1]={0};
 int ans=1;
 for(int i=1;i<=n;i++)
 {
  if(visit[i]==0)
  {
   visit[i]=1;
   queue<int> q;
   q.push(i);
   while(!q.empty())
   {
    int top=q.front();
    q.pop();
    for(int i=0;i<v[top].size();i++)
    {
     level[v[top][i]]=level[top]+1;
     q.push(v[top][i]);
     visit[v[top][i]]=1;
     ans=max(ans,level[v[top][i]]);
    }
   }
  }
 }
 cout<<ans;
}