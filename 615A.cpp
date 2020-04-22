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
 int arr[101]={0};
 for(int i=0;i<n;i++)
 {
  int k;
  cin>>k;
  for(int j=0;j<k;j++)
  {
   int x;
   cin>>x;
   arr[x]=1;
  }
 }
 int ans=1;
 for(int i=1;i<=m;i++)
 {
  if(arr[i]==0)
  {
   ans=0;
   cout<<"NO\n";
   return 0;
  }
 }
 cout<<"YES\n";
 return 0;
}