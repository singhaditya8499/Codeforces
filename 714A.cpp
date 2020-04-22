#include<bits/stdc++.h>
using namespace std;
 int main()
{
 long long int a,b,c,d,k;
 cin>>a>>b>>c>>d>>k;
 a=max(a,c);
 b=min(b,d);
 if(b<a)
 {
  cout<<0;
 }
 else
 {
  if(k>=a&&k<=b)
  {
   cout<<b-a;
  }
  else
  cout<<b-a+1;
 }
 return 0;
}