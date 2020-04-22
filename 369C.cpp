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
#include<numeric> //iota
//#include<bits/stdc++.h>
using namespace std;
 //**************//
typedef unsigned long long ull;
//**************//
int n;
vector<int> arr[100003];
int bad[100003];
int d[100003];
void dfs(int start,int parent)
{
 d[start]=bad[start];
 for(int i=0;i<arr[start].size();i++)
 {
  if(parent==arr[start][i])
   continue;
  dfs(arr[start][i],start);
  d[start]+=d[arr[start][i]];
 }
}
int main()
{
 cin>>n;
 for(int i=1;i<n;i++)
 {
  int a,b,c;
  cin>>a>>b>>c;
  if(c==2)
  {
   bad[a]=bad[b]=1;
  }
  arr[a].push_back(b);
  arr[b].push_back(a);
 }
 dfs(1,-1);
 vector<int> ans;
 for(int i=1;i<=n;i++)
 {
  if(bad[i]==1&&d[i]==1)
   ans.push_back(i);
 }
 cout<<ans.size()<<"\n";
 for(int i=0;i<ans.size();i++)
  cout<<ans[i]<<" ";
}