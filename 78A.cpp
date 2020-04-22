#include "bits/stdc++.h"
using namespace std;
 int main()
{
 string a[3];
 for(int i=0;i<3;i++)
 getline(cin,a[i]);
  int ans=1,cnt=0;
 for(int i=a[0].length()-1;i>=0;i--)
 {
  if(a[0][i]=='a'||a[0][i]=='e'||a[0][i]=='i'||a[0][i]=='o'||a[0][i]=='u')
  cnt++;
 }
 if(cnt!=5)
 {
  cout<<"NO";
  return 0;
 }
 cnt=0;
 for(int i=a[1].length()-1;i>=0;i--)
 {
  if(a[1][i]=='a'||a[1][i]=='e'||a[1][i]=='i'||a[1][i]=='o'||a[1][i]=='u')
  cnt++;
 }
 //cout<<cnt
 if(cnt!=7)
 {
  cout<<"NO";
  return 0;
 }
 cnt=0;
 for(int i=a[2].length()-1;i>=0;i--)
 {
  if(a[2][i]=='a'||a[2][i]=='e'||a[2][i]=='i'||a[2][i]=='o'||a[2][i]=='u')
  cnt++;
 }
 if(cnt!=5)
 {
  cout<<"NO";
  return 0;
 }
  cout<<"YES";
}