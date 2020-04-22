#include "bits/stdc++.h"
using namespace std;
void getz(string s,int z[])
{
 z[0]=0;
 int l=0,r=0;
 for(int i=1;i<s.length();i++)
 {
  if(i>r)
  {
   l=r=i;
   while(r<s.length()&&s[r-l]==s[r])
   r++;
      z[i]=r-l;
   r--; 
  } 
  else
  {
   int k=i-l;
   if(z[k]<r-i+1)
   {
    z[i]=z[k];
   }
   else
   {
    l=i;
    while(r<s.length()&&s[r-l]==s[r])
    r++;
        z[i]=r-l;
    r--;
   }
  }
 }
}
int main()
{
 string s;
 cin>>s;
 int z[s.length()];
 getz(s,z);
 int maxz=0,res=0;
 for(int i=1;i<s.length();i++)
 {
  if(z[i]==s.length()-i&&maxz>=s.length()-i)
  {
   res=i;
   break;
  }
  maxz=max(maxz,z[i]);
 }
 if(res==0)
 cout<<"Just a legend";
 else
 cout<<s.substr(res,maxz);
 //cout<<maxz<<" "<<res;
}