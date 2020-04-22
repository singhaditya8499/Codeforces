#include<iostream>
#include<string>
#include<cmath>
#include<map>
#include<cwchar>
#include<algorithm>
using namespace std;
  #define pi 3.1415
typedef unsigned long long ull;
 bool check(ull n)
{
 for(int i=2;i*i<=n;i++)
 {
  if(n%i==0)
   return false;
 }
 return true;
}
int main()
{
 ull n;
 cin>>n;
 if(n==2)
  cout<<1<<"\n";
 else
 {
  if(n==3)
  {
   cout<<1<<"\n";
  }
  else
  {
   if(n%2==0)
   {
    cout<<2<<"\n";
   }
   else
   {
    if(check(n))
    {
     cout<<1<<"\n";
    }
    else
    {
     if(check(n-2))
     {
      cout<<2<<"\n";
     }
     else
     cout<<3<<"\n";
    }
   }
  }
 }
}