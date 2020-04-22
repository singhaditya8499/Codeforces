#include<bits/stdc++.h>
using namespace std;
 int main()
{
 int n;
 cin>>n;
 int a,b;
 cin>>a;
 queue<int> f,s;
 for(int i=0;i<a;i++)
 {
  int x;
  cin>>x;
  f.push(x);
 }
 cin>>b;
 for(int i=0;i<b;i++)
 {
  int x;
  cin>>x;
  s.push(x);
 }
 int cnt=0;
 while((!f.empty()&&!s.empty())&&cnt<200)
 {
  int ta,tb;
  cnt++;
  ta=f.front();
  f.pop();
  tb=s.front();
  s.pop();
  if(ta>tb)
  {
   f.push(tb);
   f.push(ta); 
  }
  else
  {
   s.push(ta);
   s.push(tb);
  }
 }
 if(cnt>=200)
 {
  cout<<-1;
 }
 else
 {
  if(f.empty())
  {
   cout<<cnt<<" "<<2;
  }
  else
  cout<<cnt<<" "<<1;
 }
}