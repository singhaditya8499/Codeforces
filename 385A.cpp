#include <iostream>
using namespace std;
 int main() 
{
 // your code goes here
 int n,c,i,ce=0,b=0,m=0,temp=0;
 cin>>n>>c;
 int a[n];
 for(i=0;i<n;i++)
 {
  cin>>a[i]; 
 }
 for(i=0;i<n-1;i++)
 {
  ce=a[i];
  b=a[i+1];
  if(ce-b>0)
  {
   temp=ce-b-c;
   if(temp>m)
   m=temp;
  }
 }
 cout<<m;
 return 0;
}