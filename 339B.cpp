#include<iostream>
using namespace std;
int main()
{
 int n,m;
 cin>>n>>m;
 int a[m];
 for(int i=0;i<m;i++)
 cin>>a[i];
 long long int ans=0,cur=1;
 for(int i=0;i<m;i++)
 {
  if(a[i]<cur)
  {
   ans=ans+n-cur+a[i];
   cur=a[i];
  }
  else
  {
   ans=ans+a[i]-cur;
   cur=a[i];
  }
  //cout<<ans<<endl;
 }
 cout<<ans;
 return 0;
}