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
 int ans=0;
 for(int i=0;i<5;i++)
 {
  string tmp;
  cin>>tmp;
  if(tmp[0]==s[0]||tmp[1]==s[1])
   ans=1;
 }
 if(ans)
  cout<<"YES\n";
 else
  cout<<"NO\n";
 return 0;
}