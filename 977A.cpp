#include<iostream>
#include<string>
#include<cmath>
using namespace std;
  #define pi 3.1415
typedef long long ull;
 int main()
{
 ull n,k;
 cin>>n>>k;
 while(k)
 {
  int x=n%10;
  if(x==0)
  {
   n=n/10;
   k--;
  }
  else
  {
   if(x>k)
   {
    n=(n/10)*10+x-k;
    k=0;
   }
   else
   {
    n=(n/10)*10;
    k=k-x;
   }
  }
 }
 cout<<n<<"\n";
}