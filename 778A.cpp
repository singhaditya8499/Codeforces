#include <bits/stdc++.h>
# define pb push_back
using namespace std;
int n,m;
int arr[200005],tmp[200005];
bool chk(int mid,string a,string b)
{
 for(int i=0;i<n;i++)
 tmp[i]=1;
 for(int i=0;i<=mid;i++)
 tmp[arr[i]]=0;
 int tmplen=0;
 for(int i=0;i<n;i++)
 {
  if(tmp[i]==1)
  {
   if(a[i]==b[tmplen])
   tmplen++;
  }
 }
 return tmplen==m;
}
int main()
{
 string a,b;
 cin>>a>>b;
 n=a.length();
 m=b.length();
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
  arr[i]--;
 }
 int l=0,r=n-1;
 while(l<r)
 {
  int m=(l+r)>>1;
  if(chk(m,a,b))
  {
   l=m+1;
  }
  else
  {
   r=m;
  }
 }
 cout<<l<<"\n";
}