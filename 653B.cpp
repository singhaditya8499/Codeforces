#include "bits/stdc++.h"
using namespace std;
map<string,char> ma;
set<string> ss;
int ans=0;
bool chk(string s)
{
 //cout<<s<<" ";
 for(int i=0;i<s.length()-1;i++)
 {
  string tmp=s.substr(i,2);
  //cout<<s.substr(i,2)<<"-- ";
  //tmp=s[i]+s[i+1];
  //cout<<tmp<<" ";
  //cout<<m[tmp]<<" ";
  if(ss.find(tmp)!=ss.end())
  {
   s[i+1]=ma[tmp];
  }
  else
  {
   //cout<<"-hello\n";
   return false;
  }
 }
 if(s[s.length()-1]=='a')
 return true;
 //cout<<"-here";
 return false;
}
void solve(int n,string s)
{
 if(n==0)
 {
  if(chk(s))
  ans++;
  return;
 }
 for(int i=0;i<6;i++)
 {
  solve(n-1,s+char('a'+i));
 }
}
int main()
{
 int n,q;
 cin>>n>>q;
 for(int i=0;i<q;i++)
 {
  string a;
  char b;
  cin>>a>>b;
  ss.insert(a);
  ma[a]=b;
 }
 string s;
 solve(n,s);
 cout<<ans;
}