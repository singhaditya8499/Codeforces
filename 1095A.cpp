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
 int n;
 cin>>n;
 string s;
 cin>>s;
 int cur=0;
 string ans;
 for(int i=1;cur<s.length();cur=cur+i,i++)
 {
  ans=ans+s[cur];
 }
 cout<<ans<<"\n";
 return 0;
}