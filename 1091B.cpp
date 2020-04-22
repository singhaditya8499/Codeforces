#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 typedef long long ll;
 int last(ll x)
{
 return x%10;
}
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;
 cin>>n;
 pair<ll,ll> x[n],y[n];
 for(int i=0;i<n;i++)
 {
  cin>>x[i].first>>x[i].second;
 }
 for(int i=0;i<n;i++)
  cin>>y[i].first>>y[i].second;
  ll ansx=-100000000,ansy;
 ll sumx=0,sumy=0;
 for(int i=0;i<n;i++)
 {
  sumx+=x[i].first+y[i].first;
  sumy+=x[i].second+y[i].second;
 }
 cout<<sumx/n<<" "<<sumy/n<<"\n";
}