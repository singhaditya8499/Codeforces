#include<bits/stdc++.h>
using namespace std;
int s[200001],n,k;
int main()
{
 scanf("%d%d",&n,&k);
 int i,j,x;
 for(i=1;i<=n;i++)
 {
  scanf("%d",&x);
  s[x]++;
 }
 int ss=0,s_=0,ans=0;
 for(i=200000;i&&s_<n;i--)
 {
  s_+=s[i];
  if(s_==n)break;
  ss+=s_;
  if(ss>k)
  {
   ss=s_;
   ans++;
  }
 }
 if(ss)ans++;
 printf("%d",ans);
 return 0;
}