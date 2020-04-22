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
 string a;
 cin>>a;
 string b;
 cin>>b;
 int ans=0;
 for(int i=0;i<a.length();i++)
 {
  if(a[i]!=b[i])
  {
   if(i+1<a.length()&&a[i]==b[i+1]&&b[i]==a[i+1])
   {
    ans=ans+1;
    i++;
   }
   else
   {
    ans++;
   }
  }
 }
 cout<<ans<<"\n";
}