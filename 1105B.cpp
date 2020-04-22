#include<bits/stdc++.h>
#include<unordered_map>
#define mod 998244353
using namespace std;
 typedef long long ll;
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 int ans=0;
 for(int i=0;i<26;i++)
 {
  char x='a'+i;
  int cnt=0;
  int tmpans=0;
  for(int j=0;j<s.length();j++)
  {
   if(s[j]==x)
   {
    cnt++;
    if(cnt==k)
    {
     tmpans++;
     cnt=0;
    }
   }
   else
   {
    cnt=0;
   }
  }
  if(tmpans>ans)
   ans=tmpans;
 }
 cout<<ans<<"\n";
}