#include "bits/stdc++.h"
using namespace std;
void flash()
{
 ios_base::sync_with_stdio(0); 
 cin.tie(0);
}
int main()
{
 flash();
 string s;
 cin>>s;
 int l=s.length();
 int change=0;
 if(s[0]=='h')
 {
  if(s[4]=='r'&&s[5]=='u')
  {
   s[4]='q';
   change=1;
  }
  s=s.substr(0,4)+"://"+s.substr(4,l-4);
 }
 else
 {
  if(s[3]=='r'&&s[4]=='u')
  {
   s[3]='q';
   change=1;
  }
  s=s.substr(0,3)+"://"+s.substr(3,l-3); 
 }
 //cout<<s;
 int pos=s.find("ru");
 s=s.substr(0,pos)+"."+s.substr(pos,s.length()-pos);
 pos=s.find("ru");
 if(s[s.length()-1]=='u'&&s[s.length()-2]=='r'&&s[s.length()-3]=='.')
 {
   }
 else
 s=s.substr(0,pos+2)+"/"+s.substr(pos+2,s.length()-pos-2);
 if(s[0]=='h'&&change==1)
 {
  s[7]='r';
 }
 else
 {
  if(change==1)
  s[6]='r';
 }
 cout<<s;
 //cout<<s;
}