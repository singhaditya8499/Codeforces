#include <iostream>
using namespace std;
 int main() {
 // your code goes here
 long int a,b;
 cin>>a>>b;
 long long int ans=1;
 if(a==b)
 {
  for(int i=1;i<=a;i++)
  ans=ans*i;
   cout<<ans;
  return 0;
 }
  for(int i=2;i<=min(a,b);i++)
 {
  ans=ans*i;
 }
 cout<<ans;
 return 0;
}