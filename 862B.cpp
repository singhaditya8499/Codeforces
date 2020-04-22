#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<stack>
#include<set>
using namespace std;
//**************//
typedef unsigned long long ull;
//**************//
int ans=1;
ull cnt1=0,cnt0=0;
void dfs(int pos,vector<int> v[],int p,int col)
{
 if(col==0)
  cnt0++;
 else
  cnt1++;
 for(int i=0;i<v[pos].size();i++)
 {
  if(p!=v[pos][i])
   dfs(v[pos][i],v,pos,!col);
 }
}
int main()
{
 ull n;
 cin>>n;
 vector<int> v[1000009];
 for(int i=1;i<n;i++)
 {
  int a,b;
  cin>>a>>b;
  v[a].push_back(b);
  v[b].push_back(a);
 }
 dfs(1,v,0,0);
 ull tmp=cnt1*cnt0;
 cout<<tmp-n+1<<"\n";
}