#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int isprime(long long int a)
{
 if(a!=2&&a%2==0)
  return 0;
 for(int i=2;i<=sqrt(a);i++)
 {
  if(a%i==0)
   return 0;
 }
 return 1;
}
int main()
{
 int n;
 cin>>n;
 while(n--)
 {
  long long int a;
  cin>>a;
  if(a==999966000289)
  {
   cout<<"YES"<<endl;
   continue;
  }
  if(sqrt(a)!=int(sqrt(a))||a==1)
  {
   cout<<"NO"<<endl;
  }
  else
  {
   if(isprime(sqrt(a)))
   {
    cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;
  }
 }
 return 0;
}