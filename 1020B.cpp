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
 int n;
 cin>>n;
 ull arr[n+1];
 int visit[n+1];
 for(int i=1;i<=n;i++)
 {
  cin>>arr[i];
  visit[i]=0;
 }
 for(int i=1;i<=n;i++)
 {
  dfs(i,arr,visit); 
 }
}