#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int main() 
{
 int m,s;
 cin>>m>>s;
 if(m==1&&s==0)
 {
  cout<<0<<" "<<0;
  return 0;
 }
 if(9*m<s||s==0)
 {
  cout<<-1<<" "<<-1;
  return 0;
 }
 int tmp=s;
 string sm,la;
 for(int i=1;i<=m;i++)
 {
  if(s>9)
  {
   s=s-9;
   la=la+to_string(9);
  }
  else
  {
   if(s>0)
   {
    la=la+to_string(s);
    s=0;
   }
   else
    la=la+to_string(0);
  }
 }
 int t9=(tmp-1)/9;
 for(int i=m;i>=2;i--)
 {
  if(tmp-1>9)
  {
   sm=to_string(9)+sm;
   tmp=tmp-9;
  }
  else
  {
   if(tmp-1>0)
   {
    sm=to_string(tmp-1)+sm;
    tmp=1;
   }
   else
    sm=to_string(0)+sm;
  }
 }
 if(tmp==1)
 sm=to_string(1)+sm;
 else
 sm=to_string(tmp)+sm;
 cout<<sm<<" "<<la;
 return 0;
}