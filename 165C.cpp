#include "bits/stdc++.h"
using namespace std;
 int main()
{
 long long int k;
 cin>>k;
 string s;
 cin>>s;
 long long int c[s.length()+1]={0};
 c[0]=1;
 long long int su=0;
 for(int i=0;i<s.length();i++)
 {
  su+=s[i]=='1';
  c[su]++;
 }
 long long int ans=0;
 for(int i=k;i<=su;i++)
 {
  if(k==0)
  ans+=(c[i]-1)*(c[i])>>1;
  else
  ans+=(c[i]*(c[i-k])); 
 }
 cout<<ans;
}