//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#define mod 1000000007
using namespace std;
 typedef long long ll;
int find(int x,int father[])
{
 if(father[x]==x)
  return x;
 return father[x]=find(father[x],father);
}
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;
 cin>>n;
 string s;
 cin>>s;
 ll cntl=0,cntr=0;
 for(int i=0;i<n;i++)
 {
  if(s[i]==s[0])
   cntl++;
  else
   break;
 }
 for(int i=n-1;i>=0;i--)
 {
  if(s[i]==s[n-1])
   cntr++;
  else
   break;
 }
 if(s[0]==s[n-1])
 {
  cout<<((cntl+1)*(cntr+1))%998244353<<"\n";
 }
 else
 {
  cout<<(cntl+cntr+1)%998244353<<"\n";
 }
}