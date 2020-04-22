#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,x;
 cin>>n;
 cin>>x;
 int ma=x,mi=x;
 int ans=0;
 for(int i=1;i<n;i++)
 {
  cin>>x;
  if(x>ma)
  {
   ans++;
   ma=x;
  }
  if(x<mi)
  {
   mi=x;
   ans++;
  }
 }
 cout<<ans;
 return 0;
}