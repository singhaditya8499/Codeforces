#include <iostream>
using namespace std;
 int main() 
{
 // your code goes here
 int n,c=0,i,j;
 cin>>n;
 int a[n][2];
 for(i=0;i<n;i++)
 {
  cin>>a[i][0]>>a[i][1];
 }
 int r,l,lo,up;
 for(i=0;i<n;i++)
 {
  r=l=lo=up=0;
  for(j=0;j<n;j++)
  {
   if(i==j)
   continue;
   if(a[j][0]>a[i][0]&&a[j][1]==a[i][1])
   r=1;
   if(a[j][0]<a[i][0]&&a[j][1]==a[i][1])
   l=1;
   if(a[j][0]==a[i][0]&&a[j][1]>a[i][1])
   lo=1;
   if(a[j][0]==a[i][0]&&a[j][1]<a[i][1])
   up=1;
   if(r==1&&l==1&&lo==1&&up==1)
   {
    c++;
    break;
   }
  }
 }
 cout<<c;
 return 0;
}