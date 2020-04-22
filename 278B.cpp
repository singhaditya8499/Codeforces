#include "bits/stdc++.h"
using namespace std;
void flash()
{
 ios_base::sync_with_stdio(false);
}
int main()
{
 int n;
 cin>>n;
 string s;
 for(int i=0;i<n;i++)
 {
  string tmp;
  cin>>tmp;
  s=s+tmp+'.';
 }
 for(int i=0;i<26;i++)
 {
  if(s.find(char(97+i))==-1)
  {
   cout<<char(97+i);
   return 0;
  }
 }
 for(int i=0;i<26;i++)
 {
  string a;
  a='a'+i;
  for(int j=0;j<26;j++)
  {
   string tmp=a+char('a'+j); 
   if(s.find(tmp)==-1)
   {
    cout<<tmp;
    return 0; 
   } 
  }
 }
 return 0;
}