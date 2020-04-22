#include<bits/stdc++.h>
using namespace std;
  pair<int,int> ex[5005];
int main()
{
  int n,d=0,i;
  cin>>n;
  for(i=0;i<n;i++) {
  cin>>ex[i].first>>ex[i].second;
 }
  sort(ex,ex+n);
  // smaller,larger
  for(i=0;i<n;i++)
 {
  if(d<=ex[i].second) d=ex[i].second; 
  else d=ex[i].first;
   }
  cout<<d<<endl;
           return 0;
}