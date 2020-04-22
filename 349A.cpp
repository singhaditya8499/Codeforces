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
 int c25=0,c50=0;
 int ans=1;
 while(n--)
 {
  int x;
  cin>>x;
  if(x==25)
   c25++;
  if(x==50)
  {
   c25--;
   c50++;
  }
  if(x==100)
  {
   if(c50>0)
   {
    c50--;
    c25--;
   }
   else
   c25-=3;
  }
  if(c25<0)
   ans=0;
 }
 if(ans==1)
  cout<<"YES";
 else
  cout<<"NO";
}