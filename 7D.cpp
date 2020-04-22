//author: white_whale 
#include "bits/stdc++.h"
#define mod 1000000007
using namespace std;
int a=141;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 string s;
 cin>>s;
 long long int p[s.length()+1];
 p[0]=1;
 for(int i=1;i<=s.length();i++)
 {
  p[i]=(p[i-1]*a)%mod;
 }
 int ans[s.length()+2]={0};
 long long int fh[s.length()+1]={0},bh[s.length()+1]={0},sol=0;
 for(int i=1;i<=s.length();i++)
 {
  fh[i]=(fh[i-1]+p[i]*1ll*s[i-1])%mod;
  bh[i]=(bh[i-1]*a+a*s[i-1])%mod;
    if(fh[i]!=bh[i])
  ans[i]=0;
  else
  {
   ans[i]=ans[i/2]+1;
  }
  sol+=ans[i];
 }
 cout<<sol<<"\n";
}