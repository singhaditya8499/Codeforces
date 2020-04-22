#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main()
{
 string s;
 cin>>s;
 int uc=0,lc=0;
 for(int i=0;i<s.length();i++)
 {
  if(isupper(s[i]))
  uc++;
  else
  lc++;
 }
 if(lc>=uc)
 {
  for(int i=0;i<s.length();i++)
  {
   if(s[i]<97)
   cout<<char(s[i]+32); 
   else
   cout<<s[i];
  } 
 }
 else
 {
  for(int i=0;i<s.length();i++)
  {
   if(s[i]>=97)
   cout<<char(s[i]-32);
   else
   cout<<s[i];
  }
 }
 return 0;
}