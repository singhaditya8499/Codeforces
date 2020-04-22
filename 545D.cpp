#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
 sort(a,a+n);
 int ts=a[0];
 int ans=1;
 for(int i=1;i<n;i++)
 {
  if(ts<=a[i])
  {
   ts+=a[i];
   ans++;
  }
  else
  {
   continue;
  }
 }
 cout<<ans;
}