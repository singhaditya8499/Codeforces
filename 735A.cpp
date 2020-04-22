#include<bits/stdc++.h>
using namespace std;
 int main()
{
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 int indG=-1,indI=-1;
 int l=s.length();
 for(int i=0;i<l;i++)
 {
  if(s[i]=='G')
  indG=i;
  if(s[i]=='T')
  indI=i;
 }
 int tmp=indG;
 while(1)
 {
  //cout<<1;
  if(indG+k>=l||s[indG+k]=='#')
  {
   break;
  }
  if(indG+k<l&&s[indG+k]!='#')
  {
   if(s[indG+k]=='T')
   {
    cout<<"YES\n";
    return 0; 
   } 
   else
   {
    indG+=k;
   }
  }
 }
 indG=tmp;
 while(1)
 {
  if(indG-k<0||s[indG-k]=='#')
  {
   break; 
  }
  if(indG-k>=0&&s[indG-k]!='#')
  {
   if(s[indG-k]=='T')
   {
    cout<<"YES\n";
    return 0; 
   } 
   else
   {
    indG=indG-k;
   }
  } 
 }
 cout<<"NO\n";
}