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
 int n;
 cin>>n;
 vector<int> v;
 for(int i=0;i<2*n;i++)
  {
   int x;
   cin>>x;
   v.push_back(x);
  }
 int ans=0;
 while(v.size())
 {
  int i=0;
  for(i=1;i<v.size();i++)
  {
   if(v[i]==v[0])
   {
    ans+=(i-1);
    break;
   }
  }
  v.erase(v.begin()+i);
  v.erase(v.begin());
 }
 cout<<ans<<"\n";
}