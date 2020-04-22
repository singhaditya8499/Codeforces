#include<bits/stdc++.h>
#include<unordered_map>
#define mod 1000000007
using namespace std;
 typedef long long ll;
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 ll n,l,r;
 cin>>n>>l>>r;
 ll ans[n+1][3];
 memset(ans,0,sizeof ans);
 ans[0][0]=0;
 ans[0][1]=0;
 ans[0][2]=0;
 ll rem0=(r/3)-((l-1)/3);
 ll rem1=((r+2)/3)-((l+1)/3);
 ll rem2=((r+1)/3)-((l)/3);
 ans[1][0]=(r/3)-((l-1)/3);
 ans[1][1]=((r+2)/3)-((l+1)/3);
 ans[1][2]=((r+1)/3)-((l)/3);
 for(int i=2;i<=n;i++)
 {
  ans[i][0]=(((rem0%mod*ans[i-1][0]%mod)%mod)+((rem1%mod*ans[i-1][2]%mod)%mod)+((rem2%mod*ans[i-1][1]%mod)%mod))%mod;
  ans[i][1]=(((rem2%mod*ans[i-1][2]%mod)%mod)+((rem1%mod*ans[i-1][0]%mod)%mod)+((rem0%mod*ans[i-1][1]%mod)%mod))%mod;
  ans[i][2]=(((rem0%mod*ans[i-1][2]%mod)%mod)+((rem1%mod*ans[i-1][1]%mod)%mod)+((rem2%mod*ans[i-1][0]%mod)%mod))%mod;
 }
 cout<<ans[n][0]<<"\n";
}