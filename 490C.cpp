#include "bits/stdc++.h"
using namespace std;
 int main()
{
 string s;
 cin>>s;
 long int a,b;
 cin>>a>>b;
 int arr[s.length()],arr1[s.length()];
 long int tmp=0;
 for(int i=0;i<s.length();i++)
 {
  arr[i]=(tmp*10+s[i]-'0')%a;
  tmp=arr[i];
 }
 tmp=10;
 arr1[s.length()-1]=(s[s.length()-1]-'0')%b;
 for(int i=s.length()-2;i>=0;i--)
 {
  arr1[i]=(arr1[i+1]+(s[i]-'0')*tmp)%b;
  tmp=(tmp*10)%b;
 }
 int ind=-1;
 for(int i=0;i<s.length()-1;i++)
 {
  if(arr[i]==0&&arr1[i+1]==0&&s[i+1]!='0')
  {
   ind=i;
   break;
  }
 }
 if(ind==-1)
 {
  cout<<"NO";
  return 0;
 }
 cout<<"YES\n";
 for(int i=0;i<=ind;i++)
 {
  cout<<s[i]; 
 }
 cout<<"\n";
 for(int i=ind+1;i<s.length();i++)
 cout<<s[i];
}