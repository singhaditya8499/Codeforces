#include<iostream>
#include<string>
#include<cmath>
#include<map>
#include<cwchar>
using namespace std;
  #define pi 3.1415
typedef unsigned long long ull;
 int main()
{
 int a,b;
 cin>>a>>b;
 int ans=0;
 while(a&&b&&(a>=2||b>=2))
 {
  ans++;
  if(a<b)
  {
   a=a+1;
   b=b-2;
  }
  else
  {
   b=b+1;
   a=a-2;
  }
 }
 cout<<ans;
}