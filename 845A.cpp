#include "bits/stdc++.h"
using namespace std;
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;
 cin>>n;
 int a[2*n];
 for(int i=0;i<2*n;i++)
 cin>>a[i];
 sort(a,a+2*n);
 if(a[n-1]<a[n])
 {
  cout<<"YES";
 }
 else
 {
  cout<<"NO";
 }
 return 0;
}