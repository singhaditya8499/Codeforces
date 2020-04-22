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
 int n;
 cin>>n;
 ll arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 sort(arr,arr+n);
 int cur=1;
 int ans=0;
 for(int i=0;i<n;i++)
 {
  if(cur<=arr[i])
  {
   ans++;
   cur++;
  }
 }
 cout<<ans<<"\n";
}