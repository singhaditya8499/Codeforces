#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
#include<map>
using namespace std;
 int main()
{
 int n,m;
 cin>>n>>m;
 string s[m],d[m];
 for(int i=0;i<m;i++)
 {
  cin>>s[i]>>d[i];
 }
 for(int i=0;i<n;i++)
 {
  string t;
  cin>>t;
  for(int j=0;j<m;j++)
  {
   if(s[j]==t)
   {
    if(s[j].length()<=d[j].length())
    {
     cout<<s[j]<<" ";
     break;
    }
    else
    {
     cout<<d[j]<<" ";
     break;
    }
   }
  }
 }
}