#include<bits/stdc++.h>
#include<unordered_map>
#define mod 998244353
using namespace std;
 typedef long long ll;
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 int ma=-1;
 for(int i=0;i<n;i++)
  ma=max(ma,arr[i]);
 ll tt=-1,maa=1000000000;
 for(int i=1;i<=ma;i++)
 {
  ll tmp=0;
  for(int j=0;j<n;j++)
  {
   tmp+=min(abs(i-arr[j]),min(abs(i+1-arr[j]),abs(i-1-arr[j])));
  }
  if(tmp<maa)
  {
   maa=tmp;
   tt=i;
  }
 }
 cout<<tt<<" "<<maa<<"\n";
}