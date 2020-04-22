#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int tmp,ans=0,pre,x;
 cin>>x;
 pre=x;
 tmp++;
 while(n>1)
 {
  cin>>x;
  if(x>=pre)
  {
   pre=x;
   tmp++;
  }
  else
  {
   if(tmp>ans)
   ans=tmp;
   tmp=0;
   pre=x;
   tmp++;
  }
  n--;
 }
 if(tmp>ans)
 ans=tmp;
 cout<<ans;
}