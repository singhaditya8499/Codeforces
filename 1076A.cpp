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
 int pos=0;
 for(int i=1;i<n;i++)
 {
  if(s[i]<s[i-1])
  {
   pos=i-1;
   break;
  }
  else
  {
   pos=i;
  }
 }
 s.erase(pos,1);
 cout<<s<<"\n";
}