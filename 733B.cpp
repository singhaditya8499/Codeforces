#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 pair<int,int> a[n];
 int left=0,right=0;
 for(int i=0;i<n;i++)
 {
  cin>>a[i].first>>a[i].second;
  left+=a[i].first;
  right+=a[i].second;
 }
 int maxs=abs(left-right);
 int c=0;
 for(int i=0;i<n;i++)
 {
  int tmpleft=left,tmpright=right;
  tmpleft-=a[i].first;
  tmpright-=a[i].second;
  tmpleft+=a[i].second;
  tmpright+=a[i].first;
  if(abs(tmpleft-tmpright)>maxs)
  {
   maxs=abs(tmpleft-tmpright);
   c=i+1;
  }
 }
 cout<<c;
}