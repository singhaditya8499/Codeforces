//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#define mod 1000000007
using namespace std;
 typedef long long ll;
  int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n,m;
 cin>>n>>m;
 //int ans=0;
 set<ll> s;
 int ans[n+1],arr[n+1];
 for(int i=1;i<=n;i++)
 {
  cin>>arr[i];
 }
 for(int i=n;i>=1;i--)
 {
  if(s.find(arr[i])==s.end())
  {
   s.insert(arr[i]);
   arr[i]=1;
  }
  else
  {
   arr[i]=0;
  }
 }
 for(int i=n-1;i>=1;i--)
 {
  arr[i]=arr[i+1]+arr[i];
 }
 for(int i=0;i<m;i++)
 {
  int x;
  cin>>x;
  cout<<arr[x]<<"\n";
 }
 return 0;
}