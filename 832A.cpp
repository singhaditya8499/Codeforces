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
 ll n,k;
 cin>>n>>k;
 ll cnt=n/k;
 if(cnt%2==0)
  cout<<"NO\n";
 else
  cout<<"YES\n";
}