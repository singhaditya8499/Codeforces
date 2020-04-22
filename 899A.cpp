#include<iostream>
#include<string>
#include<cmath>
#include<map>
#include<cwchar>
#include<algorithm>
using namespace std;
  #define pi 3.1415
typedef unsigned long long ull;
 int main()
{
 int n;
 cin>>n;
 int cnt1=0,cnt2=0;
 for(int i=0;i<n;i++)
 {
  int c;
  cin>>c;
  if(c==1)
   cnt1++;
  else
   cnt2++;
 }
 int ans=0;
 ans+=min(cnt2,cnt1);
 cnt1-=min(cnt2,cnt1);
 ans+=cnt1/3;
 cout<<ans<<"\n";
}