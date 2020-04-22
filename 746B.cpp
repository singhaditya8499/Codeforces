#include<bits/stdc++.h>
using namespace std;
 int main()
{
 int n;
 cin>>n;
 string s,ans;
 cin>>s;
 int f=0;
 if(n%2==0)
 {
  f=1;
  for(int i=0;i<n;i++)
  {
   if(f==0)
   {
    ans=ans+s[i];
    f=1;
   }
   else
   {
    ans=s[i]+ans;
    f=0;
   }
  }
  cout<<ans;
  return 0;
 }
 for(int i=0;i<n;i++)
 {
  if(f==0)
  {
   ans=ans+s[i];
   f=1;
  }
  else
  {
   ans=s[i]+ans;
   f=0;
  }
 }
 cout<<ans;
}