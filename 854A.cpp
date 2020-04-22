#include "bits/stdc++.h"
using namespace std;
 int main()
{
 int n;
 cin>>n;
 int i=1,j=n-1;
 int ansi=-1,ansj=-1;
 while(i<=j)
 {
  if(__gcd(i,j)==1)
  {
   ansi=i;
   ansj=j;
  }
  i++;
  j--;
 }
 cout<<ansi<<" "<<ansj;
}