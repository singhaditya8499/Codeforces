#include "bits/stdc++.h"
using namespace std;
bool cmp(string a,string b)
{
 return (a+b)<(b+a); 
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;
 cin>>n;
 string a[n];
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 sort(a,a+n,cmp);
 string ans;
 for(int i=0;i<n;i++)
 ans+=a[i];
  cout<<ans;
}