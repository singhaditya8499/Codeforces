#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,k;
 cin>>n>>k;
 int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
 int sum=0,mi=0,ind=1;
 for(int i=0;i<k;i++)
 mi=mi+a[i];
  sum=mi;
 for(int i=k;i<n;i++)
 {
  sum=sum-a[i-k];
  sum=sum+a[i];
  if(sum<mi)
  {
  mi=sum;
  ind=i-k+2;
 }
 }
 if(sum<mi)
 {
     ind=n-k+2;
 }
 cout<<ind;
}