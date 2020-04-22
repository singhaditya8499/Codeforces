#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int a[n+1][n+1];
 for(int i=1;i<n+1;i++)
 {
  a[i][1]=1;
  a[1][i]=1;
 }
 for(int i=2;i<n+1;i++)
 {
  for(int j=2;j<n+1;j++)
  {
   a[i][j]=a[i-1][j]+a[i][j-1];
  }
 }
 cout<<a[n][n];
}