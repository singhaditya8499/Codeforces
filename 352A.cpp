#include<bits/stdc++.h>
using namespace std;
 int main()
{
 int n;
 cin>>n;
 int c5=0,c0=0;
 for(int i=0;i<n;i++)
 {
  int x;
  cin>>x;
  if(x)
  {
   c5++;
  }
  else
  c0++;
 }
 if(c0==0&&c5<9||c0==0)
 {
  cout<<-1;
  return 0;
 }
 if(c5<9&&c0>0)
 {
  cout<<0;
  return 0;
 }
 int ans=c5/9;
 for(int i=0;i<ans*9;i++)
 {
  cout<<5;
 }
 for(int i=0;i<c0;i++)
 cout<<0;
}