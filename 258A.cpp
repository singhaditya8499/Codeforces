#include<bits/stdc++.h>
using namespace std;
 int main()
{
 string s;
 cin>>s;
 int op=0;
 for(int i=s.length()-1;i>=0;i--)
 {
  if(s[i]=='0')
  op=1;
 }
 int l=s.length();
 if(op==1)
 {
  int rem=0;
  for(int i=0;i<l;i++)
  {
   if(rem==0&&s[i]=='0')
   {
    rem=1;
    continue;
   }
   cout<<s[i];
  }
  return 0;
 }
 for(int i=0;i<l-1;i++)
 {
  cout<<s[i];
 }
 return 0;
}