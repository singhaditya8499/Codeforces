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
 if(n==0)
  {
      cout<<1;
      return 0;
  }
 if(n%4==1)
  cout<<8;
 else
  if(n%4==2)
   cout<<4;
  else
   if(n%4==3)
    cout<<2;
   else
    cout<<6;
}