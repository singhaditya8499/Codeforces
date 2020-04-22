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
 int n,x,y;
 cin>>n>>x>>y;
 int ans=0;
 map<double,int> m;
 int yes=0;
 for(int i=0;i<n;i++)
 {
  float xx,yy;
  cin>>xx>>yy;
  if(xx==x)
  {
   yes=1;
   continue;
  }
  double slope=(yy-y)/(xx-x);
  // cout<<xx<<" "<<yy<<" "<<slope<<"\n";
  m[slope]+=1;
 }
 ans=m.size();
 if(yes)
  ans++;
 cout<<ans<<"\n";
 return 0;
}