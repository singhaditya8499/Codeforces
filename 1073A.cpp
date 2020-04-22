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
 int yes=0;
 for(int i=0;i<s.length()-1;i++)
 {
  if(s[i]!=s[i+1])
  {
   yes=1;
   cout<<"YES\n";
   cout<<s.substr(i,2)<<"\n";
   return 0;
  }
 }
 cout<<"NO\n";
}