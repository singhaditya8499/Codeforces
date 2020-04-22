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
  int n;
  cin>>n;
  string s;
  cin>>s;
  int i=0,j=n-1;
  int yes=1;
  while(i<j)
  {
   if(abs(s[i]-s[j])==2||abs(s[i]-s[j])==0)
   { 
    i++;
    j--;
   }
   else
   {
    yes=0;
    break;
   }
  }
  if(yes)
   cout<<"YES\n";
  else
   cout<<"NO\n";
 }
}