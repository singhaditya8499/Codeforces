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
 unordered_map<string,int> m;
 for(int i=0;i<n;i++)
 {
  string s;
  cin>>s;
  if(m.count(s)==0)
  {
   cout<<"NO\n";
   m[s]=1;
  }
  else
  {
   cout<<"YES\n";
  }
 }
}