//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#define mod 1000000007
using namespace std;
 typedef long long ll;
 bool cmp(int a,int b)
{
 return a>b;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n,m,k;
 cin>>n>>m>>k;
 int arr[n+1];
 int ans=1000000;
 for(int i=1;i<=n;i++)
  cin>>arr[i];
 for(int i=m-1;i>=1;i--)
 {
  if(arr[i]<=k&&arr[i])
  {
   ans=min(ans,(m-i)*10);
   //cout<<i<<"\n";
   break;
  }
 }
 for(int i=m+1;i<=n;i++)
 {
  if(arr[i]<=k&&arr[i])
  {
   ans=min(ans,(i-m)*10);
   //cout<<i<<"\n";
   break;
  }
 }
 cout<<ans<<"\n";
 return 0;
}