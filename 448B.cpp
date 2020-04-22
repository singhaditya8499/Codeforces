#include <bits/stdc++.h>
# define pb push_back
using namespace std;
int main()
{
 string a,b;
 cin>>a>>b;
 if(b.length()>a.length())
 {
  cout<<"need tree\n";
  return 0;
 }
 int k=0,j=0;
 while(k<a.length()&&j<b.length())
 {
  if(a[k]==b[j])
  j++;
  k++;
 }
 if(j==b.length())
 {
  cout<<"automaton\n";
  return 0;
 }
 int ar[26]={0};
 for(int i=0;i<a.length();i++)
 ar[a[i]-'a']++;
 for(int i=0;i<b.length();i++)
 ar[b[i]-'a']--;
 int a0=1,ne=0;
 for(int i=0;i<26;i++)
 {
  if(ar[i]>0)
  a0=0;
  if(ar[i]<0)
  ne=1;
 }
 if(a0==1)
 {
  cout<<"array\n";
  return 0;
 }
 if(ne==1)
 cout<<"need tree\n";
 else
 cout<<"both\n";
}