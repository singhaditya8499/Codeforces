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
  string s;
  cin>>s;
  set<char> ss;
  for(int i=0;i<s.length();i++)
  {
   ss.insert(s[i]);
  }
  if(ss.size()==1)
  {
   cout<<"-1"<<"\n";
  }
  else
  {
   sort(s.begin(),s.end());
   cout<<s<<"\n";
  }
  }
}