//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
// #define mod 1000000007
using namespace std;
 typedef long long ll;
 bool cmp(int a,int b)
{
 return a>b;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 ll mod=1000000007;
 ll x,y;
 cin>>x>>y;
 ll n;
 cin>>n;
 n--;
 if(n%6==0)
 {
  ll tmp=x;
  tmp+=mod;
  if(tmp<0)
   cout<<tmp+mod<<"\n";
  else
  cout<<tmp%mod<<"\n";
 }
 else if(n%6==1)
 {
  ll tmp=y;
  tmp+=mod;
  if(tmp<0)
   cout<<tmp+mod<<"\n";
  else
  cout<<tmp%mod<<"\n";
 }
 else if(n%6==2)
 {
  ll tmp=y-x;
  tmp+=mod;
  //cout<<tmp<<"-\n";
  if(tmp<0)
   cout<<tmp+mod<<"\n";
  else
  cout<<tmp%mod<<"\n";
 }
 else if(n%6==3)
 {
  ll tmp=-x;
  tmp+=mod;
  if(tmp<0)
   cout<<tmp+mod<<"\n";
  else
  cout<<tmp%mod<<"\n";
 }
 else if(n%6==4)
 {
  ll tmp=-y;
  tmp+=mod;
  if(tmp<0)
   cout<<tmp+mod<<"\n";
  else
  cout<<tmp%mod<<"\n";
 }
 else
 {
  ll tmp=x-y;
  tmp+=mod;
  if(tmp<0)
   cout<<tmp+mod<<"\n";
  else
  cout<<tmp%mod<<"\n";
 }
 return 0;
}