#include "bits/stdc++.h"
using namespace std;
 int main()
{
 int n;
 cin>>n;
 char a[n];
 for(char c='a';c<='d';c++)
 {
  int i=c-'a';
  for(int j=i;j<n;j=j+4)
  {
   a[j]=c;
  }
 }
 for(int i=0;i<n;i++)
 cout<<a[i];
 return 0;
}