#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
#include<map>
using namespace std;
 int main()
{
 string s;
 cin>>s;
 int q;
 cin>>q;
 int a[s.length()+1]={0};
 for(int i=0;i<s.length()-1;i++)
 {
  if(s[i]==s[i+1])
  {
   a[i+2]=a[i+1]+1;
  }
  else
   a[i+2]=a[i+1];
 }
 //for(int i=1;i<=s.length();i++)
 // cout<<a[i]<<" ";
 while(q--)
 {
     int u,v;
     cin>>u>>v;
     cout<<a[v]-a[u]<<endl;
 }
}