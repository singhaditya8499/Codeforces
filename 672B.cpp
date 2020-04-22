#include<bits/stdc++.h>
using namespace std;
 int main()
{
 int n;
 cin>>n;
 string s;
 cin>>s;
 if(n>26)
 {
  cout<<-1;
  return 0;
 }
 set<char> se;
 for(int i=0;i<n;i++)
 {
  se.insert(s[i]);
 }
 cout<<n-se.size();
}