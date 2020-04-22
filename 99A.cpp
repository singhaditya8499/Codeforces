#include "bits/stdc++.h"
using namespace std;
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 string s;
 cin>>s;
 int pos=s.find(".");
 if(s.substr(pos,s.length()-pos)<".5"&&s[pos-1]!='9')
 {
  cout<<s.substr(0,pos);
  return 0;
 }
 if(s.substr(pos,s.length()-pos)>=".5"&&s[pos-1]!='9')
 {
  s=s.substr(0,pos);
  s[s.length()-1]++;
  cout<<s;
  return 0;
 }
 cout<<"GOTO Vasilisa.";
}