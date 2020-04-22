#include<iostream>
using namespace std;
 int main()
{
 int n;
 cin>>n;
 string s;
 cin>>s;
 int ans=0;
 for(int i=0;i<s.length();i++)
 {
  int curr=0;
  //cout<<i<<" ";
  while(s[i]=='x'&&i<s.length())
  {
   curr++;
   i++;
  }
  if(curr>=3)
  {
      ans=ans+curr-2;
      i--;
  }
 }
 cout<<ans;
}