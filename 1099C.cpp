#include<bits/stdc++.h>
using namespace std;
 typedef long long ll;
ll gcd(ll a,ll b)
{
 if(b==0)
  return a;
 return gcd(b,a%b);
}
int main()
{
 string s;
 cin>>s;
 int k;
 cin>>k;
 int cnta=0,cntb=0,cntc=0;
 int ans=1;
 for(int i=0;i<s.length();i++)
 {
  if(i==0)
  {
   if(s[i]=='?'||s[i]=='*')
   {
    ans=0;
    break;
   }
  }
  if(s[i]=='?'||s[i]=='*')
  {
   if(s[i-1]=='?'||s[i-1]=='*')
   {
    ans=0;
    break;
   }
  }
  if(s[i]=='?')
   cnta++;
  else if(s[i]=='*')
   cntb++;
  else
   cntc++;
 }
 if(!ans||(cntc-cnta-cntb)>k)
 {
  cout<<"Impossible\n";
  return 0;
 }
 if(cntc<k&&cntb==0)
 {
  cout<<"Impossible\n";
  return 0;
 }
 if(cntc>k)
 {
  string ans;
  int extra=cntc-k;
  for(int i=0;i<s.length();i++)
  {
   if(extra)
   {
    if(s[i]=='?'||s[i]=='*')
    {
     ans=ans.substr(0,ans.length()-1);
     extra--;
    }
    else
    {
     ans=ans+s[i];
    }
   }
   else
   {
    if(s[i]!='?'&&s[i]!='*')
     ans=ans+s[i];
   }
   }
  cout<<ans<<"\n";
 }
 else if(cntc==k)
 {
  string ans;
  for(int i=0;i<s.length();i++)
  {
   if(s[i]!='?'&&s[i]!='*')
    ans=ans+s[i];
  }
  cout<<ans<<"\n";
 }
 else
 {
  string ans;
  //cout<<"here\n";
  int extra=k-cntc;
  for(int i=0;i<s.length();i++)
  {
   //cout<<"blocked\n";
   if(s[i]=='?')
    continue;
   else if(s[i]=='*')
   {
    if(extra)
    {
     while(extra)
     {
      ans=ans+ans[ans.length()-1];
      extra--;
     }
    }
   }
   else
   {
    ans=ans+s[i];
   }
  }
  cout<<ans<<"\n";
 }
}