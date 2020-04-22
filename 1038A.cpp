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
 int k;
 cin>>k;
 string s;
 cin>>s;
 int arr[26];
 memset(arr,0,sizeof arr);
 for(int i=0;i<s.length();i++)
 {
  arr[s[i]-'A']++;
 }
 int mi=1000000;
 for(int i=0;i<k;i++)
 {
  mi=min(mi,arr[i]);
 }
 cout<<k*mi<<"\n";
}