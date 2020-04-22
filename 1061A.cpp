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
 ll n,s;
 cin>>n>>s;
 int found=0;
 ll ans=(s/n)+1;
 for(int i=n;i>=1;i--)
 {
  if(s%n==0)
  {
   ans=min(ans,s/n);
  }
 }
 cout<<ans<<"\n";
 return 0;
}