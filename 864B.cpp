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
 int ans=0;
 for(int i=0;i<s.length();i++)
 {
  int j=i;
  set<char> ss;
  while(j<s.length()&&s[j]>='a'&&s[j]<='z')
  {
   ss.insert(s[j]);
   j++;
  }
  int size=ss.size();
  ans=max(ans,size);
 }
 cout<<ans<<"\n";
}