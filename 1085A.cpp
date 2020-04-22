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
 string ans;
 int x=1;
 if(s.length()%2==0)
  x=0;
 int i=0,j=s.length()-1;
 while(i<=j)
 {
  if(x==0)
  {
   ans=s[j]+ans;
   j--;
   x=1-x;
  }
  else
  {
   ans=s[i]+ans;
   i++;
   x=1-x;
  }
 }
 cout<<ans<<"\n";
}