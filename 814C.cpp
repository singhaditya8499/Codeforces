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
 int q;
 cin>>q;
 while(q--)
 {
  int a;
  cin>>a;
  char c;
  cin>>c;
  int i=0,j=0;
  int cnt=0,ans=0;
  while(j<n)
  {
   if(cnt<=a)
   {
    if(s[j]!=c)
     cnt++;
    j++;
   }
   if(cnt>a)
   {
    if(s[i]!=c)
     cnt--;
    i++;
   }
   ans=max(ans,j-i);
  }
  cout<<ans<<"\n";
 }
}