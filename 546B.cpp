#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int a[6005]={0};
 int ans=0;
 for(int i=1;i<=n;i++)
 {
  int x;
  cin>>x;
  if(a[x]==0)
  {
   a[x]++;
  }
  else
  {
      int j=x,k=x;
      while(a[j]!=0)
      {
          ans++;
          j++;
      }
      a[j]=1;
  }
   }
 cout<<ans;
}