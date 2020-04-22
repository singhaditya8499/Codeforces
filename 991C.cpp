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
 ll n;
 cin>>n;
 ll low=1,high=n;
 while(low<high)
 {
  ll mid=low+(high-low)/2;
  ll k=n;
  ll sum=0;
  while(k)
  {
   sum+=min(k,mid);
   k-=min(mid,k);
   k-=k/10;
  }
  if(sum*2>=n)
  {
   high=mid;
  }
  else
  {
   low=mid+1;
  }
 }
 cout<<low<<"\n";
}