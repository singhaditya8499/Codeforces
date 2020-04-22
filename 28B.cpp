#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<stack>
#include<set>
#include<utility>
#include<map>
using namespace std;
 //**************//
typedef unsigned long long ull;
//**************//
bool solve(int src,int des,vector<int> v[],int n)
{
 int visit[n+1];
 for(int i=0;i<=n;i++) visit[i]=0;
 queue<int> q;
 q.push(src);
 visit[src]=1;
 while(!q.empty())
 {
  int x=q.front();
  q.pop();
  for(int i=0;i<v[x].size();i++)
  {
   if(!visit[v[x][i]])
   {
    q.push(v[x][i]);
    visit[v[x][i]]=1;
   }
  }
 }
 if(visit[des]==1)
  return true;
 return false;
 //return visit[des]==1;
}
int main()
{
 int n;
 cin>>n;
 int final[n+1],fav[n+1];
 for(int i=1;i<=n;i++)
  cin>>final[i];
 for(int i=1;i<=n;i++)
  cin>>fav[i];
 vector<int> v[n+1];
 for(int i=1;i<=n;i++)
 {
  if(i+fav[i]<=n)
  {
   v[i].push_back(i+fav[i]);
   v[i+fav[i]].push_back(i);
  }
  if(i-fav[i]>=1)
  {
   v[i].push_back(i-fav[i]);
   v[i-fav[i]].push_back(i);
  }
 }
 int ans=1;
 for(int i=1;i<=n;i++)
 {
  if(!solve(i,final[i],v,n))
  {
   ans=0;
   //cout<<i<<" "<<final[i]<<"\n";
   break;
  }
 }
 if(ans)
  cout<<"YES\n";
 else
  cout<<"NO\n";
}