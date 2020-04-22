#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<stack>
#include<set>
#include<utility>
#include<map>
#include<numeric> //iota
//#include<bits/stdc++.h>
using namespace std;
 //**************//
typedef unsigned long long ull;
//**************//
 int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  string s;
  cin>>s;
  int l=0,u=0,d=0;
  vector<int> lo,up,di;
  for(int i=0;i<s.length();i++)
  {
   if(s[i]>='a'&&s[i]<='z')
   {
    l=1;
    lo.push_back(i);
   }
   if(s[i]>='A'&&s[i]<='Z')
   {
    u=1;
    up.push_back(i);
   }
   if(s[i]>='0'&&s[i]<='9')
   {
    d=1;
    di.push_back(i);
   }
  }
  if(l==1&&u==1&&d==1)
  {
   cout<<s<<endl;
  }
  else
  {
   if(l==1&&u==1)
   {
    if(lo.size()!=1)
     s[lo[0]]='1';
    else 
     s[up[0]]='1';
    cout<<s<<"\n";
   }
   else if(u==1&&d==1)
   {
    if(up.size()!=1)
     s[up[0]]='a';
    else 
     s[di[0]]='a';
    cout<<s<<"\n";
   }
   else if(d==1&&l==1)
   {
    if(lo.size()!=1)
     s[lo[0]]='A';
    else 
     s[di[0]]='A';
    cout<<s<<"\n";
   }
   else if(d==1)
   {
    s[0]='a';
    s[1]='A';
    cout<<s<<"\n";
   }
   else if(l==1)
   {
    s[0]='A';
    s[1]='0';
    cout<<s<<"\n";
   }
   else if(u==1)
   {
    s[0]='a';
    s[1]='1';
    cout<<s<<"\n";
   }
  }
 }
}