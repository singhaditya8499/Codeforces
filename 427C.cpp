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
stack<int> s;
int n;
const ull mod=1000000007;
ull tm=0;
void dfs(int pos,int visit[],vector<int> v[])
{
 visit[pos]=1;
 for(int i=0;i<v[pos].size();i++)
 {
  if(!visit[v[pos][i]])
   dfs(v[pos][i],visit,v);
 }
 s.push(pos);
}
void dfs1(int visit[],vector<int> vv[],map<int,int> &m,int pos,int arr[])
{
 visit[pos]=1;
 m[arr[pos]]++;
 for(int i=0;i<vv[pos].size();i++)
 {
  if(!visit[vv[pos][i]])
   dfs1(visit,vv,m,vv[pos][i],arr);
 }
}
ull solve(int visit[],vector<int> v[],int arr[],vector<int> vv[])
{
 for(int i=1;i<=n;i++)
 {
  if(!visit[i])
  {
   dfs(i,visit,v);
  }
 }
 ull ans=1;
 for(int i=0;i<=n;i++)
  visit[i]=0;
 while(!s.empty())
 {
  map<int,int> m;
  int x=s.top();
  s.pop();
  if(!visit[x])
  {
   dfs1(visit,vv,m,x,arr);
   map<int,int>::iterator it=m.begin();
   if(it->second!=0)
   {
    ans=(ans%mod*(it->second)%mod)%mod;
    tm+=it->first;
   }
   m.clear();
  }
 }
 return ans;
}
int main()
{
 cin>>n;
 int arr[n+1];
 for(int i=0;i<n;i++)
  cin>>arr[1+i];
 int m;
 cin>>m;
 vector<int> v[n+1],vv[n+1];
 for(int i=0;i<m;i++)
 {
  int a,b;
  cin>>a>>b;
  v[a].push_back(b);
  vv[b].push_back(a);
 }
 int visit[n+1];
 for(int i=0;i<=n;i++)
  visit[i]=0;
 ull tm1=solve(visit,v,arr,vv);
 cout<<tm<<" "<<tm1<<"\n";
}