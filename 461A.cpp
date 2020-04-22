#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 int main()
{
 int n;
 cin>>n;
 int a[n];
 long long int sum=0,total=0;
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
  sum+=a[i];
 }
 sort(a,a+n);
 total=sum;
 for(int i=0;i<n-1;i++)
 {
  sum=sum+total;
  total-=a[i];
 }
 cout<<sum;
}