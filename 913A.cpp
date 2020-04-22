#include "bits/stdc++.h"
using namespace std;
 int main()
{
 long long n,m;
 cin>>n>>m;
 long long int ans[30];
 ans[0]=1;
 for(int i=1;i<30;i++)
 ans[i]=2*ans[i-1];
 if(n>30)
 cout<<m;
 else
 {
  cout<<m%ans[n]<<"\n";
 }
}