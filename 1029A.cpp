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
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 int pos=n;
 for(int i=1;i<n;i++)
 {
  int j=i,k=0;
  while(s[j]==s[k]&&j<n)
  {
   j++;
   k++;
  }
  if(j==n)
  {
   pos=i;
   break;
  }
 }
 cout<<s;
 k--;
 for(int i=0;i<k;i++)
 {
  cout<<s.substr(n-pos);
 }
 cout<<endl;
}