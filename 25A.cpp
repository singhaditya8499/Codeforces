#include <iostream>
using namespace std;
 int main() 
{
 // your code goes here
 int n,i,pe=0,po=0,ce=0,co=0;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 {
  cin>>a[n];
  if(a[n]%2==0)
  {
   pe=i+1;
   ce++;
  }
  else
  {
   po=i+1;
   co++;
  }
 }
 if(ce==1)
 cout<<pe;
 else
 cout<<po;
 return 0;
}