#include "bits/stdc++.h"
using namespace std;
int main()
{
 string a,b;
 cin>>a>>b;
 string tmp,tmp1;
 int i=0;
 while(a[i]=='0')
 {
  i++;
 }
 for(int j=i;j<a.length();j++)
 tmp+=a[j];
 i=0;
 while(b[i]=='0')
 {
  i++;
 }
 for(int j=i;j<b.length();j++)
 tmp1+=b[j];
  //cout<<tmp<<" "<<tmp1;
 a=tmp;
 b=tmp1;
 if(a.length()>b.length())
 {
  cout<<">";
  return 0;
 }
 if(a.length()<b.length())
 {
  cout<<"<";
  return 0;
 }
 if(a==b)
 {
  cout<<"=";
  return 0;
 }
 if(a>b)
 {
  cout<<">";
 }
 else
 cout<<"<";
  return 0;
}