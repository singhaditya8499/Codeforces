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
 int t;
 cin>>t;
 while(t--)
 {
  int n;
  cin>>n;
  string s;
  cin>>s;
  int found=0;
  for(int i=1;i<n;i++)
  {
   if(s[i]!='0')
   {
    found=i;
    break;
   }
  }
  if(n==2)
  {
   if(s[0]>=s[1])
    found=0;
  }
  if(found==n-1&&s[n-1]<=s[0])
  {
   found=0;
  }
  if(found==0)
  {
   cout<<"NO\n";
  }
  else
  {
   cout<<"YES\n";
   cout<<2<<"\n";
   cout<<s[0]<<" "<<s.substr(1)<<"\n";
  }
 }
 }