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
 ll y,b,r;
 cin>>y>>b>>r;
 ll ans=min(y,min(b-1,r-2));
 cout<<ans+ans+ans+3<<"\n";
}