#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
#include<map>
using namespace std;
 int main()
{
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
  cin>>a[i];
  if(a[n-1]==15)
 {
     cout<<"DOWN";
     return 0;
 }
 if(a[n-1]==0)
 {
     cout<<"UP";
     return 0;
 }
 if(n==1&&a[0]==0)
 {
     cout<<"UP";
     return 0;
 }
 if(n==1&&(a[0]!=0))
 {
  cout<<-1;
  return 0;
 }
 if(a[n-1]>a[n-2])
 {
  cout<<"UP";
 }
 else
  cout<<"DOWN";
}