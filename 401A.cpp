#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,x;
 cin>>n>>x;
 int sum=0,a;
 for(int i=0;i<n;i++)
 {
  cin>>a;
  sum+=a;
 }
 if(sum<0)
 sum=abs(sum);
 int cnt=0;
 if(sum==0)
 {
  cout<<0;
  return 0;
 }
 while(1)
 {
  sum=sum-x;
  cnt++;
  if(sum<=0)
  break;
 }
 cout<<cnt;
}