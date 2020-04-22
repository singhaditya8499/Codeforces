#include <iostream>
using namespace std;
 int main() 
{
 // your code goes here
 long long n,k,i,temp=0,m=-2000000000;
 cin>>n>>k;
 int f[n],t[n];
 for(i=0;i<n;i++)
 {
  cin>>f[i]>>t[i];
 }
 for(i=0;i<n;i++)
 {
  if(t[i]>k)
  {
   temp=f[i]-t[i]+k;
  }
  else
  temp=f[i];
  if(temp>m)
  m=temp;
 }
 cout<<m;
 return 0;
}