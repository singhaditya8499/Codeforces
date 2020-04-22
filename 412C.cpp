#include "bits/stdc++.h"
using namespace std;
 int main()
{
 int n;
 cin>>n;
 string s[n];
 for(int i=0;i<n;i++)
 {
  cin>>s[i];
 }
 string ans;
 for(int j=0;j<s[0].length();j++)
 {
  char pat='.';
  int change=0;
  for(int i=0;i<n;i++)
  {
   if(pat=='.'&&s[i][j]!='?')
   {
    pat=s[i][j];
    continue; 
   } 
   if(pat!=s[i][j]&&s[i][j]!='?')
   {
    change=1;
    break;
   }
  }
  if(pat=='.')
  ans=ans+'x';
  else
  if(change==1)
  ans=ans+'?';
  else
  ans=ans+pat;
 }
 cout<<ans;
}