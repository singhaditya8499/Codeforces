#include "bits/stdc++.h"
using namespace std;
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 string s;
 cin>>s;
 int l=s.length();
 if(s[0]=='-')
 {
  l--; 
 }
 if(l<=3)
 {
  if(l<3)
  {
   cout<<"byte";
   return 0;
  }
  else
  {
   if(s<="127")
   {
    cout<<"byte";
    return 0;
   }
  }
 }
 if(l<=5)
 { 
  if(l<5)
  {
   cout<<"short";
   return 0;
  }
  else
  {
   if(s<="32767")
   {
    cout<<"short";
    return 0; 
   }
  }
 }
 if(l<=10)
 {
  if(l<10)
  {
   cout<<"int";
   return 0;
  }
  else
  {
   if(s<="2147483647")
   {
    cout<<"int";
    return 0; 
   }
  }
 }
 if(l<=19)
 {
  if(l<19)
  {
   cout<<"long";
   return 0;
  }
  else
  {
   if(s<="9223372036854775807")
   {
    cout<<"long";
    return 0; 
   }
  }
 }
 cout<<"BigInteger";
}