#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#include<ctime>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
  int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 ll n,k;
 cin>>n>>k;
 map<ll,ll> lft,rit;
 ll arr[n];
 for(int i=0;i<n;i++)
 {
  ll x;
  cin>>x;
  arr[i]=x;
  rit[x]++;
 }
 ll ans=0;
 for(int i=0;i<n;i++)
 {
  ll l=0,r=0;
  if(arr[i]%k==0)
   l=lft[arr[i]/k];
  rit[arr[i]]--;
  r=rit[arr[i]*k];
  ans+=(r*l);
  lft[arr[i]]++;
 }
 cout<<ans<<"\n";
}