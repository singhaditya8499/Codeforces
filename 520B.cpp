#include <iostream>
using namespace std;
int n,m,ans=0;
int main()
{
    cin>>n>>m;
    while(n<m)
 {
  if(m%2==1)
  m++;
  else
  m/=2;
  ans++;
 }
    cout<<ans+n-m;
}