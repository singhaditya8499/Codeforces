#include "bits/stdc++.h"
using namespace std;
bool cmp(pair<string,pair<int,int> > a,pair<string,pair<int,int> > b)
{
 if(a.second.first!=b.second.first)
 return a.second.first<b.second.first;
  return a.second.second<b.second.second;
}
int main()
{
 int n;
 cin>>n;
 pair<string,pair<int,int> > a[n];
 for(int i=0;i<n;i++)
 {
  string s;
  a[i].second.second=i;
  cin>>a[i].first>>s;
  if(s=="rat")
  a[i].second.first=0;
  if(s=="woman")
  a[i].second.first=1;
  if(s=="child")
  a[i].second.first=1;
  if(s=="man")
  a[i].second.first=2;
  if(s=="captain")
  a[i].second.first=3;
 }
 sort(a,a+n,cmp);
 for(int i=0;i<n;i++)
 cout<<a[i].first<<"\n";
}