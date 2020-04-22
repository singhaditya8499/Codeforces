#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 string s;
 cin>>s;
 vector<int> div;
 for(int i=1;i*i<=n;i++)
 {
  if(n%i==0)
  {
   if(i!=n/i)
   {
    div.push_back(i);
    div.push_back(n/i);
   }
   else
    div.push_back(i);
  }
 }
 sort(div.begin(),div.end());
 for(int i=0;i<div.size();i++)
 {
  string tmp=s.substr(div[i],s.length()-div[i]);
  s=s.substr(0,div[i]);
  reverse(s.begin(),s.end());
  s=s+tmp;
 }
 cout<<s;
}