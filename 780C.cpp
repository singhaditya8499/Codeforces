#include <bits/stdc++.h>
using namespace std;
 int n,a,b,i,m[200005];
vector<int> v[200005];
set<int> s;
 dfs(int x,int y,int z){s.insert(y);m[x]=y;
 int j=0,a=1;
  while(j<v[x].size()){
  while(a==y||a==z)a++;
  if(m[v[x][j]]==0)dfs(v[x][j],a,y),a++;
  j++;
 }
}
  main(){
 cin>>n;
  while(i<n-1){
  cin>>a>>b;
  v[a].push_back(b);
  v[b].push_back(a);
  i++;
 }i=0;
  dfs(1,1,0);
  cout<<s.size()<<endl;;
  while(i<n){
  cout<<m[i+1]<<" ";
  i++;
 }
}