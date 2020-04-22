#include <iostream>
using namespace std;
 int main() 
{
 // your code goes here
 int n,i,c=0,j,k;
 cin>>n;
 int h[n],a[n];
 for(i=0;i<n;i++)
 { 
  cin>>h[i];
  cin>>a[i];
 }
  for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(h[i]==a[j])
   c++;
  }
  for(k=i+1;k<n;k++)
  {
   if(a[i]==h[k])
   c++;
  }
 }
 cout<<c;
 return 0;
}