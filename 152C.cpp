#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
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
 int n,m;
 cin>>n>>m;
 string s[n];
 for(int i=0;i<n;i++)
  cin>>s[i];
 ll ans=1;
 for(int i=0;i<m;i++)
 {
  set<char> ss;
  for(int j=0;j<n;j++)
  {
   ss.insert(s[j][i]);
  }
  ans=(ans%mod*ss.size()%mod)%mod;
 }
 cout<<ans<<"\n";
}