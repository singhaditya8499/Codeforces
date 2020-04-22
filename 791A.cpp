#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
using namespace std;
int main()
{
 int a,b;
 cin>>a>>b;
 int ans=0;
 while(a<=b)
 {
  a=a*3;
  b=b*2;
  ans++;
 }
 cout<<ans;
 return 0 ;
}