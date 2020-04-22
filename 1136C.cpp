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
 vector<int> a[n+m],b[n+m];
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   int x;
   cin>>x;
   a[i+j].push_back(x);
  }
 }
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   int x;
   cin>>x;
   b[i+j].push_back(x);
  }
 }
 int ans=1;
 for(int i=0;i<=n+m-2;i++)
 {
  sort(a[i].begin(),a[i].end());
  sort(b[i].begin(),b[i].end());
  if(a[i]!=b[i])
  {
   ans=0;
   break;
  }
 }
 if(ans)
  cout<<"YES\n";
 else
  cout<<"NO\n";
}