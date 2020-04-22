#include<bits/stdc++.h>
using namespace std;
long long n,s,l,r,mid,b[100009],a[100009],sum,ans1,ans2;
int main()
{
 cin>>n>>s;
 for(int i=1;i<=n;i++)
  cin>>b[i];
 l=0;r=n;
 while(l<r)
 {
  mid=(l+r)/2;
  mid++;
  for(int i=1;i<=n;i++)
   a[i]=b[i]+i*mid;
  sort(a+1,a+1+n);
  sum=0;
  for(int i=1;i<=mid;i++)
   sum+=a[i];
  if(sum>s)
   r=mid-1;
  else
  {
   if(mid>ans1)
    ans1=mid,ans2=sum;
   l=mid;
  }
 }
 cout<<ans1<<" "<<ans2;
 return 0;
}