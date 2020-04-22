#include <bits/stdc++.h>
#define pb push_back
using namespace std;
const int N = 1e3;
vector <int> vc[N+10];
bool ma[N+10];
void dfs(int v)
{
 ma[v] = true; 
  for(int i = 0; i < vc[v].size(); i++){
  int u = vc[v][i];
  if(!ma[u])
   dfs(u);
 }
  return;
}
 int main()
{
 int n, m, cnt0 = 0, cnt = 0;
 cin >> n >> m;
  for(int i = 0; i < n; i++){
  int k, x;
  cin >> k;
    if(!k)
   cnt0++, ma[i] = true;
     while(k--){
   cin >> x, x+=n+1;
   vc[x].pb(i),  vc[i].pb(x);   
  }
 }
  if(cnt0 == n)
  return cout << n, 0;
  cnt = cnt0; 
 for(int i = 0; i < n; i++)
  if(!ma[i])
   cnt++, dfs(i);
  cout << cnt-1;
  return 0;
}