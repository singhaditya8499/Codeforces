#include <iostream>
#include<cmath>
using namespace std;
 int main() 
{
 // your code goes here
 long long n,k,f=0,i;
 cin>>n>>k;
 for(i=1;i<31;i++)
 {
  if(pow(n,i)==k)
  {
   f=1;
   break;
  }
 }
 if(f==1)
 {
  cout<<"YES"<<"\n"<<i-1;
 }
 else
 cout<<"NO";
 return 0;
}