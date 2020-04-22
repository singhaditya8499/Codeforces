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
 if(n%2==1)
  cout<<0<<"\n";
 else
 {
  int x=n/2;
  long long ans=pow(2,x);
  cout<<ans<<"\n";
 }
}