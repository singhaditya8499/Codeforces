#include<bits/stdc++.h>
using namespace std;
 typedef unsigned long long int ull;
typedef long long int ll;
 #define mod 1000000007
 int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  string a,b;
  cin>>a>>b;
  vector<pair<char,int> > va,vb;
  int cnt=0;
  char cur=a[0];
  for(int i=0;i<a.length();i++)
  {
   if(cur==a[i])
    cnt++;
   else
   {
    va.push_back(make_pair(cur,cnt));
    cur=a[i];
    cnt=1;
   }
  }
  va.push_back(make_pair(cur,cnt));
  cnt=0;
  cur=b[0];
  for(int i=0;i<b.length();i++)
  {
   if(cur==b[i])
    cnt++;
   else
   {
    vb.push_back(make_pair(cur,cnt));
    cur=b[i];
    cnt=1;
   }
  }
  vb.push_back(make_pair(cur,cnt));
  if(vb.size()!=va.size())
  {
   cout<<"NO\n";
   continue;
  }
  int ans=1;
  for(int i=0;i<va.size();i++)
  {
   if(va[i].first!=vb[i].first)
   {
    ans=0;
    break;
   }
   else
   {
    if(va[i].second>vb[i].second)
    {
     ans=0;
     break;
    }
   }
  }
  if(ans)
   cout<<"YES\n";
  else
   cout<<"NO\n";
  }
}