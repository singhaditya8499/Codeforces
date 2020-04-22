#include<bits/stdc++.h>
using namespace std;
 typedef unsigned long long int ull;
typedef long long int ll;
 #define mod 1000000007
 int main()
{
 int n;
 cin>>n;
 string s;
 cin>>s;
 vector<int> v[26];
 for(int i=0;i<26;i++)
 {
  int cur=0;
  for(int j=0;j<n;j++)
  {
   if(s[j]==char(i+'a'))
    cur++;
   v[i].push_back(cur);
  }
 }
 int q;
 cin>>q;
 while(q--)
 {
  string a;
  cin>>a;
  int ans=-1;
  int arr[26]={0};
  for(int i=0;i<a.length();i++)
  {
   arr[a[i]-'a']++;
  }
  for(int i=0;i<26;i++)
  {
   int x=lower_bound(v[i].begin(),v[i].end(),arr[i])-(v[i].begin());
   ans=max(ans,x);
  }
  cout<<ans+1<<"\n";
 }
}