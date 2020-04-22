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
 string s;
 cin>>s;
 int cnta[s.length()+1],cntb[s.length()+1];
 memset(cnta,0,sizeof cnta);
 memset(cntb,0,sizeof cntb);
 for(int i=1;i<=s.length();i++)
 {
  if(s[i-1]=='a')
   cnta[i]=1;
  cnta[i]+=cnta[i-1];
 }
 for(int i=1;i<=s.length();i++)
 {
  if(s[i-1]=='b')
   cntb[i]=1;
  cntb[i]+=cntb[i-1];
 }
 int ans=0;
 for(int i=1;i<=s.length();i++)
 {
  for(int j=i;j<=s.length();j++)
  {
   int cur=cnta[i]+cntb[j]-cntb[i-1]+cnta[s.length()]-cnta[j];
   ans=max(ans,cur);
  }
 }
 cout<<ans<<"\n";
}