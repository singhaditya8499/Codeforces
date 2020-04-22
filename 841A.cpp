#include "bits/stdc++.h"
#include <set>
using namespace std;
 int main()
{
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 int a[26]={0};
 for(int i=0;i<n;i++)
 {
  a[s[i]-'a']++;
 }
 for(int i=0;i<26;i++)
 {
  if(a[i]>k)
  {
   cout<<"NO";
   return 0;
  }
 }
 cout<<"YES";
 return 0;
}