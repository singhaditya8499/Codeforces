#include<iostream>
#include<unordered_map>
#include<vector>
#include<utility>
using namespace std;
int main()
{
 int n,m,k;
 cin>>n>>m>>k;
 int arr[n+1];
 for(int i=0;i<n+1;i++)
  arr[i]=0;
 vector<pair<int,unsigned long long> > vv[n+1];
 for(int i=0;i<m;i++)
 {
  int u,v,w;
  cin>>u>>v>>w;
  vv[u].push_back(make_pair(v,w));
  vv[v].push_back(make_pair(u,w));
 }
 unordered_map<int,int> ma;
 unsigned long long ans =1e18;
 for(int i=0;i<k;i++)
 {
  int x;
  cin>>x;
  ma[x]=1;
 }
 for(unordered_map<int,int>::iterator it=ma.begin();it!=ma.end();it++)
 {
  for(int i=0;i<vv[it->first].size();i++)
  {
   if(ma.find(vv[it->first][i].first)==ma.end())
   {
    ans=min(vv[it->first][i].second,ans);
   }
  }
 }
 if(ans==1e18)
  cout<<-1<<"\n";
 else cout<<ans<<"\n";
}