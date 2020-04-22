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
bool cmp(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
{
 if(a.first.first!=b.first.first)
 return a.first.first<b.first.first;
  return a.second<b.second;
}
int main()
{
 int n;
 cin>>n;
 ll arr[2*n];
 for(int i=0;i<2*n;i++)
  cin>>arr[i];
 sort(arr,arr+2*n);
 ll ans=1e18;
 ans=min(ans,(arr[n-1]-arr[0])*(arr[2*n-1]-arr[n]));
 for(int i=1;i<n;i++)
 {
  ans=min(ans,(arr[2*n-1]-arr[0])*(arr[i+n-1]-arr[i]));
 }
 cout<<ans<<"\n";
}