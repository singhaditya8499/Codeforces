#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
#include<map>
using namespace std;
int main()
{
 long long int n,a,b,tmp;
 cin>>a>>b;
 long long int ans=0;
 while(b>1)
 {
  if(a==b||a==0||b==0)
  {
      ans++;
      a=0;
      break;
  }
  ans=ans+a/b;
  tmp=max(a%b,b);
  b=min(a%b,b);
  a=tmp;
  if(a==0||b==0)
  {
      a=0;
      break;
  }
 }
 ans=ans+a;
 cout<<ans;
}