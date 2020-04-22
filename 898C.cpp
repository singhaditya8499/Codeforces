#include<bits/stdc++.h>
using namespace std;
map<string,set<string>>mp;
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n,t;
 cin>>n;
 string s,x;
 for(int i=1;i<=n;i++)
 {
  cin>>s>>t;
  for(int j=0;j<t;j++)
  {
   cin>>x;
   mp[s].insert(x);
  }
 }
 cout<<mp.size()<<"\n";
 for(auto &i:mp)
 {
  set<string> &tmp=i.second;
  for(auto &x:tmp)
   for(int y=1;y<x.size();y++)
    if(tmp.count(string(x.begin()+y,x.end())))
     tmp.erase(string(x.begin()+y,x.end()));
  cout<<i.first<<" "<<tmp.size()<<" ";
  for(auto x:i.second)
  cout<<x<<" ";
  cout<<"\n";
 }
}