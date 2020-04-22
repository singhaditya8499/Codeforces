#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
 int main() 
{
 long int n,c;
 cin>>n>>c;
 long int ans=0,pre;
 cin>>pre;
 ans++;
 long int t=2;
 while(t<=n)
 {
  int x;
  cin>>x;
  if(x-pre<=c)
  {
   ans++;
   pre=x;
  }
  else
  {
   ans=0;
   ans++;
   pre=x;
  }
  t++;
 }
 cout<<ans;
 return 0;
}