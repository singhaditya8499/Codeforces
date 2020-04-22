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
 int n;
 cin>>n;
 ll arr[10];
 for(int i=1;i<10;i++)
  cin>>arr[i];
 string ans="-1";
 int cnt=0,aa=0;
 for(int i=1;i<10;i++)
 {
  if(cnt<(n/arr[i]))
  {
   cnt=n/arr[i];
   aa=i;
  }
 }
 if(cnt==0)
 {
  cout<<ans<<"\n";
  return 0;
 }
 ans="";
 // cout<<ans<<"\n";
 int left=n-arr[aa]*cnt;
 for(int i=0;i<cnt;i++)
 {
  int change=0;
  left+=arr[aa];
  int cur=aa;
  for(int j=9;j>aa;j--)
  {
   if(arr[j]<=left)
   {
    change=1;
    cur=j;
    break;
   }
  }
  left-=arr[cur];
  cout<<cur;
 }
 cout<<"\n";
}