#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int m=0,c=0,a,b;
 for(int i=0;i<n;i++)
 {
  cin>>a>>b;
  if(a>b)
  m++;
  else
  {
   if(b>a)
   c++;
  }
 }
 if(m>c)
 cout<<"Mishka";
 else
 {
  if(c>m)
  cout<<"Chris";
  else
  cout<<"Friendship is magic!^^";
 }
}