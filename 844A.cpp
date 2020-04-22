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
 int k;
 cin>>k;
 if(k>s.length())
 {
  cout<<"impossible\n";
  return 0;
 }
 set<char> ss;
 for(int i=0;i<s.length();i++)
 {
  ss.insert(s[i]);
 }
 int n=ss.size();
 //cout<<n<<"\n";
 if(k<=n)
 {
  cout<<0<<"\n";
 }
 else
 {
  cout<<k-n<<"\n";
 }
}