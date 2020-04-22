#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 typedef long long ll;
ll gcd(ll a,ll b)
{
 if(b==0)
  return a;
 return gcd(b,a%b);
}
int main()
{
 int n,k;
 cin>>n>>k;
 int cnt[5001];
 int arr[n];
 int sol[n];
 for(int i=0;i<n;i++)
 {
  int x;
  cin>>x;
  arr[i]=x;
  cnt[x]++;
 }
 int color[k];
 memset(color,0,sizeof color);
 unordered_map<int,int> m[k];
 if(k>n)
 {
  cout<<"NO\n";
  return 0;
 }
 int i=0;
 for(;i<k;i++)
 {
  color[i]++;
  m[i][arr[i]]=1;
  sol[i]=i+1;
 }
 int ans=1;
 for(;i<n;i++)
 {
  int found=0;
  for(int j=0;j<k;j++)
  {
   if(m[j].find(arr[i])==m[j].end())
   {
    m[j][arr[i]]=1;
    sol[i]=j+1;
    found=1;
    break;
   }
  }
  if(!found)
   ans=0;
 }
 if(!ans)
 {
  cout<<"NO\n";
 }
 else
 {
  cout<<"YES\n";
  for(int j=0;j<n;j++)
   cout<<sol[j]<<" ";
 }
}