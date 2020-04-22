#include <iostream>
using namespace std;
 int main() 
{
 // your code goes here
 int n,p=0,i,j,min,sum=0;
 cin>>n;
 int k[110];
 for(i=0;i<n;i++)
 cin>>k[i];
 int m[n][110];
 m[0][101]=0;
 for(i=0;i<n;i++)
 {
  sum=0;
  for(j=0;j<k[i];j++)
  {
   cin>>m[i][j];
   m[i][j]=(5*m[i][j]);
   sum=sum+m[i][j];
  }
  m[i][101]=15*k[i]+sum;
 }
 min=m[0][101];
 for(i=0;i<n;i++)
 {
  if(m[i][101]<min)
  {
   min=m[i][101];
   p=i+1;
  }
 }
 cout<<min;
 return 0;
}