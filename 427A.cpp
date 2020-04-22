#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,cnp=0,po=0;
 cin>>n;
 for(int i=0;i<n;i++)
 {
  int tmp;
  cin>>tmp;
  if(tmp==-1&&po==0)
  cnp++;
  else
  {
   if(tmp==-1&&po>0)
   po--;
   else
   po=po+tmp;
  }
 }
 cout<<cnp;
 return 0;
}