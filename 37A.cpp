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
 int a[1001]={0};
 for(int i=0;i<n;i++)
 {
  int x;
  cin>>x;
  a[x]++;
 }
 int h=0,c=0;
 for(int i=0;i<=1000;i++)
 {
  if(a[i]>0)
  {
   c++;
   h=max(h,a[i]);
  }
 }
 cout<<h<<" "<<c;
}