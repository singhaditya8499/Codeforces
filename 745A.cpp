#include<bits/stdc++.h>
using namespace std;
 int main()
{
 string s;
 cin>>s;
 set<string> ans1;
 for(int i=0;i<s.length();i++)
 {
  string ans;
  for(int j=s.length()-i;j<s.length();j++)
  {
   ans+=s[j];
  }
  for(int k=0;k<s.length()-i;k++)
  ans+=s[k];
    ans1.insert(ans);
 }
 cout<<ans1.size();
}