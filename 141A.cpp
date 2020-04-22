#include<iostream>
using namespace std;
int main()
{
 string d,e,c;
 cin>>d>>e>>c;
 int a[26]={0},b[26]={0};
 for(int i=0;i<d.length();i++)
 a[d[i]-'A']++;
 for(int i=0;i<e.length();i++)
 a[e[i]-'A']++;
 for(int i=0;i<c.length();i++)
 b[c[i]-'A']++;
 for(int i=0;i<26;i++)
 {
  if(a[i]!=b[i])
  {
   cout<<"NO";
   return 0;
  }
 }
 cout<<"YES";
 return 0;
}