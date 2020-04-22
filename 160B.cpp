#include<iostream>
#include<string>
#include<cmath>
#include<map>
#include<cwchar>
#include<algorithm>
using namespace std;
  #define pi 3.1415
typedef unsigned long long ull;
 int main()
{
 int n;
 cin>>n;
 string s;
 cin>>s;
 string s1=s.substr(n,n);
 s=s.substr(0,n);
 sort(s.begin(),s.end());
 sort(s1.begin(),s1.end());
 if(s[0]>s1[0])
 {
  for(int i=0;i<n;i++)
  {
   if(s1[i]>=s[i])
   {
    cout<<"NO\n";
    return 0;
   }
  }
 }
 else if(s[0]<s1[0])
 {
  for(int i=0;i<n;i++)
  {
   if(s[i]>=s1[i])
   {
    cout<<"NO\n";
    return 0;
   }
  }
 }
 else
 {
  cout<<"NO\n";
  return 0;
 }
 cout<<"YES\n";
}