#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
 int main()
{
 long long int a,b,s;
 cin>>a>>b>>s;
 if(abs(a)+abs(b)==s)
 {
  cout<<"Yes";
  return 0;
 }
 if(a==0&&b==0&&s%2==0)
 {
  cout<<"Yes";
  return 0;
 }
 if((abs(a)+abs(b)>s)||(abs(a)+abs(b)<s&&abs(s-abs(a)-abs(b))%2==1))
 {
  cout<<"No";
  return 0;
 }
 if(abs(a)+abs(b)<s&&(s-abs(a)-abs(b))%2==0)
 {
  cout<<"Yes";
  return 0;
 }
 return 0;
}