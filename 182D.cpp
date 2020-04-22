#include "bits/stdc++.h"
using namespace std;
 void zarray(int za[],string a,string b)
{
 string s=a+'$'+b;
 za[0]=0;
 int l=0,r=0;
 for(int i=1;i<s.length();i++)
 {
  if(i>r)
  {
   l=r=i;
   while(s[r]==s[r-l]&&r<s.length())
   r++; 
      za[i]=r-l;
   r--;
  } 
  else
  {
   int k=i-l;
   if(za[k]<r-i+1)
   {
    za[i]=za[k];
   }
   else
   {
    l=i;
    while(s[r]==s[r-l]&&r<s.length())
    r++;
        za[i]=r-l;
    r--;
   }
  }
 }
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 string a,b;
 cin>>a>>b;
 long int ans=0;
 int z[a.length()+b.length()+1];
 zarray(z,a,b);
 int l=a.length()+b.length()+1,l1=a.length(),l2=b.length();
 for(int i=0;i<l1;i++)
 {
  int f=1;
  for(int j=i+1;j<l1;j+=i+1)
  {
   if(z[j]<i+1)
   {
    f=0;
    break;
   }
  }
  for(int j=l1+1;j<l;j+=(i+1))
  {
   if(z[j]<i+1)
   {
    f=0;
    break;
   }
  }
  if(f)
  ans++;
 }
 cout<<ans;
}