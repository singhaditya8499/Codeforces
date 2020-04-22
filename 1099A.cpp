#include<bits/stdc++.h>
using namespace std;
 typedef long long ll;
ll gcd(ll a,ll b)
{
 if(b==0)
  return a;
 return gcd(b,a%b);
}
int main()
{
 int a,b;
 cin>>a>>b;
 int arr[2][2];
  cin>>arr[0][0]>>arr[0][1]>>arr[1][0]>>arr[1][1];
 int curr=a;
 for(int i=b;i>=0;i--)
 {
  curr+=i;
  if(arr[0][1]==i)
  {
   curr=curr-arr[0][0];
  }
  if(arr[1][1]==i)
  {
   curr-=arr[1][0];
  }
  if(curr<0)
   curr=0;
 }
 cout<<curr<<"\n";
}