#include <iostream>
using namespace std;
 int main() 
{
 // your code goes here
 int c1=0,c2=0,c3=0,c4=0,c5=0,n,i,k,s;
 cin>>n>>k;
 int a[n];
 for(i=0;i<n;i++)
 {
  cin>>a[i];
  a[i]=5-a[i];
  if(a[i]==1)
  c1++;
  if(a[i]==2)
  c2++;
  if(a[i]==3)
  c3++;
  if(a[i]==4)
  c4++;
  if(a[i]==5)
  c5++;
 }
 if(k==1)
 {
  s=(c1+c2+c3+c4+c5)/3;
  cout<<s;
 }
 else
 {
  if(k==2)
  {
   s=(c2+c3+c4+c5)/3;
   cout<<s;
  }
  else
  {
   if(k==3)
   {
    s=(c3+c4+c5)/3;
    cout<<s;
   }
   else
   {
    if(k==4)
    {
     s=(c4+c5)/3;
     cout<<s;
    }
    else
    cout<<c5/3;
   }
  }
 }
 return 0;
}