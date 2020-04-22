#include "bits/stdc++.h"
using namespace std;
string change(string s,int pos,int cnt)
{
 if(s[pos]=='z')
 {
  s[pos]='a';
 }
 else
 {
  s[pos]++;
 }
 //cout<<s<<"00\n";
 if(s[pos-1]==s[pos]&&pos-1>=0)
 {
  if(s[pos]=='z')
  s[pos]='a';
  else
  s[pos]++; 
 }
 return s;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 string s;
 cin>>s;
 int l=s.length();
 for(int i=l-2;i>=0;i--)
 {
  if(s[i]==s[i+1])
  {
   s=change(s,i,0);
  }
 }
 cout<<s;
}