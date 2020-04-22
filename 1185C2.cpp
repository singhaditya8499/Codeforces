#include<bits/stdc++.h>
using namespace std;
 typedef unsigned long long int ull;
typedef long long int ll;
 #define mod 1000000007
 int main()
{
 int n,m;
 cin>>n>>m;
 int arr[101]={0};
 cout<<0<<" ";
 int x;
 cin>>x;
 arr[x]++;
 for(int i=1;i<n;i++)
 {
  cin>>x;
  int left=m-x;
  int cnt=0;
  for(int j=1;j<=100;j++)
  {
   int pos=left/j;
   if(pos<=arr[j])
   {
    left-=(pos*j);
    cnt+=pos;
   }
   else
   {
    left-=(arr[j]*j);
    cnt+=arr[j];
   }
   if(left<(j+1))
    break;
  }
  cout<<i-cnt<<" ";
  arr[x]++;
 }
}