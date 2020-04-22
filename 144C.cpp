#include "bits/stdc++.h"
using namespace std;
void flash()
{
 ios_base::sync_with_stdio(false);
}
 int main()
{
 string a,b;
 cin>>a>>b;
 int arr1[26]={0};
 for(int i=0;i<b.length();i++)
 arr1[b[i]-'a']++;
 int l=b.length();
 if(a.length()<l)
 {
  cout<<0;
  return 0;
 }
 long int ans=0;
 int arr[26]={0};
 for(int i=0;i<l;i++)
 {
  if(a[i]=='?')
  {
  }
  else
  arr[a[i]-'a']++;
 }
 int tmp=1;
 for(int i=0;i<26;i++)
 {
  if(arr[i]>arr1[i])
  {
   tmp=0;
   break;
  }
 }
 if(tmp)
 ans++;
 for(int i=1;i<=a.length()-l;i++)
 {
  if(a[i-1]!='?')
  arr[a[i-1]-'a']--;
  if(a[i+l-1]!='?')
  arr[a[i+l-1]-'a']++;
  tmp=1;
  for(int j=0;j<26;j++)
  {
   if(arr[j]>arr1[j])
   {
    tmp=0;
    break;
   } 
  }
  if(tmp)
  ans++;    
 }
 cout<<ans;
}