#include <iostream>
using namespace std;
 int main() 
{
 // your code goes here
 int n,m,i,j;
 cin>>n>>m;
 char a[n][m];
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   a[i][j]='.';
  }
 }
 for(j=0;j<n;j=j+2)
 {
  for(i=0;i<m;i++)
  {
   a[j][i]='#';
  }
 }
 for(i=1;i<n;i=i+4)
 {
  a[i][m-1]='#';
  a[i+2][0]='#';
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   cout<<a[i][j];
  }
  cout<<"\n";
 }
 return 0;
}