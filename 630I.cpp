#include<iostream>
#include<string>
#include<cmath>
#include<map>
#include<cwchar>
#include<algorithm>
using namespace std;
  #define pi 3.1415
typedef unsigned long long ull;
 ull solve(ull a, ull b, ull c)
{
 if(b==1)
  return a%c;
 else if(b%2==0)
 {
  ull x=solve(a,b/2,c)%c;
  return (x%c*x%c)%c;
 }
 else
 {
  ull x=solve(a,b/2,c)%c;
  return ((x%c*x%c)%c*a%c)%c;
 }
}
int main()
{
 long long n;
 cin>>n;
 ull ans;
 ans=2*4*3*pow(4,n-3)+4*3*3*pow(4,n-4)*(n-3);
 cout<<ans<<"\n";
}