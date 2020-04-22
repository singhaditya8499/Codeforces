#include "bits/stdc++.h"
using namespace std;
 int main()
{
 string a,b;
 cin>>a>>b;
 if(a.length()!=b.length())
 {
  cout<<-1;
  return 0;
 }
 string ans;
 for(int i=0;i<a.length();i++)
 {
  if(b[i]>a[i])
  {
   cout<<-1;
   return 0; 
  }
  ans+=b[i];  
 }
 cout<<ans;
}