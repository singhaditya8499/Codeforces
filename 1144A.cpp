#include<bits/stdc++.h>
using namespace std;
 typedef unsigned long long int ull;
typedef long long int ll;
 #define mod 1000000007
 int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  string s;
  cin>>s;
  sort(s.begin(),s.end());
  int ans=1;
  for(int i=1;i<s.length();i++)
  {
   if(s[i]!=char(s[i-1]+1))
   {
    ans=0;
    break;
   }
  }
  if(ans)
   cout<<"Yes\n";
  else
   cout<<"No\n";
 }
}