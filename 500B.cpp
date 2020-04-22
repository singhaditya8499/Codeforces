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
int grp[1000];
int find_grp(int x)
{
 if(grp[x]==x)
  return x;
 return grp[x]=find_grp(grp[x]);
}
void merge(int a,int b)
{
 a=find_grp(a);
 b=find_grp(b);
 if(a!=b)
  grp[a]=b;
}
int cnt[305];
int main()
{
 int n;
 cin>>n;
 int arr[n+1];
 for(int i=1;i<=n;i++)
  cin>>arr[i];
 for(int i=0;i<=1000;i++)
  grp[i]=i;
 for(int i=1;i<=n;i++)
 {
  string s;
  cin>>s;
  s=' '+s;
  for(int j=1;j<=s.length();j++)
  {
   if(s[j]=='1')
    merge(i,j);
  }
 }
 vector<int> ans[n+1];
 for(int i=1;i<=n;i++)
 {
  ans[find_grp(i)].push_back(arr[i]);
 }
  for(int i=1;i<=n;i++)
  sort(ans[i].begin(), ans[i].end());
 for(int i=1;i<=n;i++)
 {
  int x=find_grp(i);
  cout<<ans[x][cnt[x]++]<<" ";
 }
}