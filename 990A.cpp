#include<iostream>
using namespace std;
 int main()
{
 long long int n,m,a,b;
 cin>>n>>m>>a>>b;
 if(n%m==0)
 {
  cout<<0;
  return 0;
 }
 if(n<m)
 {
  cout<<min((m-n)*a,n*b);
  return 0;
 }
 cout<<min((n%m)*b,((m-n%m)*a));
 return 0;
}