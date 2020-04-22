#include "bits/stdc++.h"
using namespace std;
 int main()
{
 string s;
 cin>>s;
 int l=s.length();
 long long int ans=0;
 int cntp=1,bf=0;
 for(int i=0;i<l-3;i++)
 {
  if(s[i]=='b'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='r')
  {
   ans=ans+(cntp)*(l-i-3);
   cntp=1;
  }
  else
  cntp++;
 }
 cout<<ans;
}