#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 1000000000000
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define S second
#define F first
#define boost ios::sync_with_stdio(false);
 double bottle[1000001],eps=1e-10;
vector<pair<ll,double> >ans[100001];
 int main()
{
 cout<<fixed<<setprecision(9);
 ll i,j,n,m,w;
 double target,left[1000001];
 cin>>n>>w>>m;
 for(i=1;i<=n;i++)
 bottle[i]=w;
 target=1.0*(n*w)/m;
 for(i=1;i<=m;i++)
 left[i]=target;
 for(i=1;i<=n;i++)
 {
  ll ctr=0;
  for(j=1;j<=m;j++)
  {
   if(bottle[i]<=eps)
   break;
   if(left[j]<=eps)
   continue;
   ctr++;
   if(bottle[i]+eps>left[j])
   {
    ans[j].pb(mp(i,left[j]));
    bottle[i]-=left[j];
    left[j]=0;
   }
   else
   {
    ans[j].pb(mp(i,bottle[i]));
    left[j]-=bottle[i];
    bottle[i]=0;
   }
  }
  if(ctr>2)
  {
   cout<<"NO";
   return 0;
  }
 }
 cout<<"YES"<<endl;
 for(i=1;i<=m;i++)
 {
  for(j=0;j<ans[i].size();j++)
  cout<<ans[i][j].F<<" "<<ans[i][j].S<<" ";
  cout<<endl;
 }
 return 0;
}