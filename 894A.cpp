//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#define mod 1000000007
using namespace std;
 typedef long long ll;
  int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 string s;
 cin>>s;
 int cnt=0;
 ll ans=0;
 for(int i=0;i<s.length();i++)
  if(s[i]=='Q')
   cnt++;
 int curr=0;
 for(int i=0;i<s.length();i++)
 {
  if(s[i]=='Q')
   curr++;
  else if(s[i]=='A')
  {
   ans=ans+(curr*(cnt-curr));
  }
 }
 cout<<ans<<"\n";
 return 0;
}