#include<iostream>
#include<cmath>
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
  if(s[i]=='1')
   ans++;
  else
   ans--;
 }
 cout<<abs(ans);
 return 0;
}