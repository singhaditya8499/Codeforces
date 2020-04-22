#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
#include<map>
using namespace std;
 int main () 
{
 string s;
 cin>>s;
 int ans=1;
 int l=s.length();
 for(int i=0;i<s.length();i++)
 {
  if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4'&&i+2<l)
  {
   i=i+2;
   continue;
  }
  if(s[i]=='1'&&s[i+1]=='4'&&i+1<l)
  {
   i=i+1;
   continue;
  }
  if(s[i]=='1')
  {
   continue;
  }
  ans=0;
 }  
 if(ans)
 {
     cout<<"YES";
 }
 else
 cout<<"NO";
}