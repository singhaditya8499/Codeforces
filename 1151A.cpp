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
 string s;
 cin>>s;
 int ans=10000000;
 string aa="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 aa=aa+aa+aa;
 string solve="ACTG";
 for(int i=0;i<=n-4;i++)
 {
  int tmp=0;
  for(int j=0;j<4;j++)
  {
   int x=s[i+j]-'A';
   x=x+26;
   // cout<<aa[x]<<"\n";
   int left=0,right=0;
   int ii=x,jj=x;
   while(ii>=0)
   {
    if(aa[ii]!=solve[j])
     left++;
    else
     break;
    ii--;
   }
   while(jj<aa.length())
   {
    if(aa[jj]!=solve[j])
     right++;
    else break;
    jj++;
   }
   // cout<<left<<" "<<right<<"\n";
   tmp+=min(left,right);
  }
  ans=min(ans,tmp);
 }
 cout<<ans<<"\n";
}