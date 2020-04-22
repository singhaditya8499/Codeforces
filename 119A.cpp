#include<iostream>
#include<algorithm>
using namespace std;
main()
{
 int a,b,n,res=0;
  cin>>a>>b>>n;
  while(true)
 {
  if(res==0) 
  n-=__gcd(a,n);
   else 
  n-=__gcd(b,n);
   res=abs(1-res);
   if(n<0)
  {
    cout<<res; 
   return 0;
  }
  }
    return 0;
}