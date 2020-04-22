#include <bits/stdc++.h>
using namespace std;
int ans,p;
int K[100000];
int A[100000];
vector<int> v[10000];
void dfs(int n)
{p++;
 if(A[n]==1)
  return ;
  A[n]=1;
 for(int i=0;i<v[n].size();i++)
 {
  if(A[v[n][i]]==0)
  {
   dfs(v[n][i]);
  }
 }
}
int main()
{
 int n,i,r,m,k,a,b,c=0,mp=0;
 cin>>n>>m>>k;
  for(i=0;i<k;i++)
 {
  cin>>K[i];
 }
 for(i=0;i<m;i++)
 {
  cin>>a>>b;
  v[a].push_back(b);
  v[b].push_back(a);
 }
  for(i=0;i<k;i++)
 {p=0;
  dfs(K[i]);
  //cout<<p<<" ";
  ans+=(p*(p-1))/2;
  mp=max(mp,p);
 }
 //cout<<mp;
 for(i=1;i<=n;i++)
 {
  if(A[i]==0)
  {
   c++;
   //cout<<i<<" ";
  }
 }
 //cout<<c;
  ans+=((mp+c)*(mp+c-1))/2 - (mp*(mp-1))/2;
  cout<<ans-m;
 }