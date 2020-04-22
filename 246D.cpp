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
void dfs(int pos,int visit[],vector<int> v[],int &cnt,int arr[],bool &ok)
{
 cnt++;
 visit[pos]=1;
 if(arr[pos]==1)
  ok=false;
 for(int i=0;i<v[pos].size();i++)
 {
  if(!visit[v[pos][i]])
   dfs(v[pos][i],visit,v,cnt,arr,ok);
 }
}
int main()
{
 int n,m;
 cin>>n>>m;
 int arr[n+1];
 unordered_map<int,int> mm;
 for(int i=1;i<=n;i++)
 {
  cin>>arr[i];
  mm[arr[i]]=1;
 }
 vector<int> v[n+1];
 for(int i=0;i<m;i++)
 {
  int a,b;
  cin>>a>>b;
  v[a].push_back(b);
  v[b].push_back(a);
 }
 set<int> s[100006];
 int ans=0,car=-1;
 for(int i=1;i<=n;i++)
 {
  for(int j=0;j<v[i].size();j++)
  {
   if(arr[v[i][j]]==arr[i])
    continue;
   s[arr[i]].insert(arr[v[i][j]]);
  }
 }
 for(int i=1;i<=100000;i++)
 {
  //cout<<s[i].size()<<" ";
  if(mm.find(i)!=mm.end())
  {
   //cout<<i<<" "<<s[i].size()<<"\n";
   int x=s[i].size();
   if(x>car)
   {
    car=s[i].size();
    ans=i;
   }
  }
 }
 cout<<ans;
}