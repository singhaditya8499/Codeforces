#include "bits/stdc++.h"
using namespace std;
 int main()
{
 int n;
 long int k;
 cin>>n>>k;
 string s;
 cin>>s;
 s='0'+s+'0';
 int l=s.length(),i=1;
 //cout<<s;
 while(i<l-1&&k>0)
 {
  //cout<<s[i];
  int c=0;
  if(s[i]=='4'&&s[i+1]=='7')
  {
   if(i%2==1)
   {
    s[i+1]='4'; 
    k--;
    //cout<<i<<"|";
   } 
   else
   {
    //cout<<i<<"]]";
    if(s[i-1]=='4')
    {
     if(k%2==0)
     {
      c=1;
      //cout<<2;
     }
     else
     {
      s[i]='7';
      c=1;
      //cout<<3;
     }
    }
    else
    {
     s[i]='7';
     k--;
    }
   }
  }
  //cout<<" ";
  if(c==1)
  k=0;
  i++;
  //k--; 
 }
 for(int i=1;i<l-1;i++)
 cout<<s[i];
}