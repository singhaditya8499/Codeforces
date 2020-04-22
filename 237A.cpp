#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
 int main()
{
 int n;
 cin>>n;
 int h,m,ph=0,pm=0;
 int ans=0,ma=0;
 cin>>ph>>pm;
 ans++;
 while(n>1)
 {
  cin>>h>>m;
  //cout<<ans<<" ";
  if(h==ph&&m==pm)
  {
   ans++;
   ph=h;
   pm=m;
  }
  else
  {
   if(ans>ma)
   {
    ma=ans;
   }
   ph=h;
   pm=m;
   ans=0;
   ans=1;
  }
  n--;
 }
 if(ans>ma)
 ma=ans;
 cout<<ma;
 return 0;
}