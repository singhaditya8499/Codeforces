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
 if(n%2==0)
 {
  cout<<n/2<<endl;
  while(n)
  {
   cout<<2<<" ";
   n=n-2;
  }
 }
 else
 {
  cout<<(n-3)/2+1<<endl;
  cout<<3<<" ";
  n=n-3;
  while(n)
  {
   cout<<2<<" ";
   n=n-2;
  }
 }
}