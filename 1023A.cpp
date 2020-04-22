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
 int n,m;
 cin>>n>>m;
 string s;
 cin>>s;
 string t;
 cin>>t;
 if(s.length()>t.length()+1)
 {
  cout<<"NO\n";
  return 0;
 }
 int pos=s.find("*");
 if(pos==-1&&s!=t)
 {
  cout<<"NO\n";
  return 0;
 }
 else
 {
  int yes=1,j=0;
  for(int i=0;i<pos;i++)
  {
   if(s[i]!=t[j])
   {
    yes=0;
    break;
   }
   j++;
  }
  int k=m-1;
  for(int i=n-1;i>pos;i--)
  {
   if(s[i]!=t[k])
   {
    yes=0;
    break;
   }
   k--;
  }
  if(yes)
   cout<<"YES\n";
  else
   cout<<"NO\n";
 }
}