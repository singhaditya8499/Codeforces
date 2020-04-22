#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
 typedef unsigned long long ull;
void dfs(int pos,ull arr[],int visit[])
{
 if(visit[pos]==1)
 {
  cout<<pos<<" ";
  visit[pos]=0;
  return;
 }
 visit[pos]=1;
 dfs(arr[pos],arr,visit);
 visit[pos]=0;
}
int main()
{
 int n,m;
 cin>>n>>m;
 ull arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 ull ans=0;
 for(int i=0;i<m;i++)
 {
  int a,b;
  cin>>a>>b;
  ans+=min(arr[a-1],arr[b-1]);
 }
 cout<<ans<<"\n";
}