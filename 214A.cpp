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
 int ans=0;
 for(int i=0;i<=100;i++)
 {
  for(int j=0;j<=100;j++)
  {
   if(n==(i*i+j)&&m==(i+j*j))
    ans++;
  }
 }
 cout<<ans<<"\n";
 return 0;
}