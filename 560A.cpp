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
 int p1=0;
 while(n--)
 {
  int x;
  cin>>x;
  if(x==1)
   p1=1;
 }
 if(p1==1)
 {
  cout<<-1;
 }
 else
  cout<<1;
}