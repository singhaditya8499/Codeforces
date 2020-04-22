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
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 vector<int> v;
 for(int i=0;i<n;i++)
 {
  if(arr[i]<=0)
   v.push_back(arr[i]);
 }
 ll ans=0;
 sort(v.begin(),v.end());
 n=v.size();
 for(int i=0;i<min(n,m);i++)
  ans=ans+abs(v[i]);
 cout<<ans<<"\n";
 return 0;
}