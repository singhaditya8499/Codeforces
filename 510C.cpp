#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<stack>
#include<set>
using namespace std;
 typedef unsigned long long ull;
stack<int> st;
void dfs(int pos,int visit[],int loop[],int &ans,vector<int> v[])
{
 visit[pos]=1;
 loop[pos]=1;
 for(int i=0;i<v[pos].size();i++)
 {
  if(!visit[v[pos][i]])
   dfs(v[pos][i],visit,loop,ans,v);
  else if(loop[v[pos][i]])
  {
   ans=0;
   break;
  }
 }
 loop[pos]=0;
 st.push(pos);
} 
int main()
{
 int n;
 cin>>n;
 string s[n];
 for(int i=0;i<n;i++)
 { 
  cin>>s[i];
 }
 vector<int> v[105];
 int ans=1;
 for(int i=0;i<n-1;i++)
 {
  int len1=s[i].length();
  int len2=s[i+1].length();
  int j=0;
  for(j=0;j<len1&&j<len2&&s[i][j]==s[i+1][j];j++);
  if(j<len1&&j<len2)
  v[s[i][j]-'a'].push_back(s[i+1][j]-'a');
  else if(len1>len2)
  {
   ans=0;
   break;
  }
 }
 int visit[100],loop[100];
 for(int i=0;i<100;i++)
 {
  visit[i]=0;
  loop[i]=0;
 }
 for(int i=0;i<26;i++)
 {
  if(!visit[i]&&ans)
  {
   //cout<<i<<" ";
   dfs(i,visit,loop,ans,v);
  }
 }
 if(!ans||st.size()!=26)
 {
  cout<<"Impossible\n";
  return 0;
 }
 //cout<<st.size()<<"-";
 while(!st.empty())
 {
  cout<<char(st.top()+'a');
  st.pop();
 }
}