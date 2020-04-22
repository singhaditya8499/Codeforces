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
 string s;
 cin>>s;
 int ans=0;
 int n=s.length()-2;
 for(int i=0;i<n;i++)
 {
  string tmp=s.substr(i,3);
  sort(tmp.begin(),tmp.end());
  if(tmp=="ABC")
  {
   ans=1;
   break;
  }
 }
 if(ans)
  cout<<"Yes\n";
 else
  cout<<"No\n";
}