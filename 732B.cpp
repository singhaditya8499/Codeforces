#include<iostream>
#include<string>
#include<cmath>
#include<map>
#include<cwchar>
using namespace std;
  #define pi 3.1415
typedef unsigned long long ull;
int arr[40][50000+20];
int main()
{
 int n,k;
 cin>>n>>k;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 int ans=0;
 for(int i=1;i<n;i++)
 {
  if(arr[i-1]+arr[i]<k)
  {
   ans+=(k-arr[i-1]-arr[i]);
   arr[i]=(k-arr[i-1]);
  }
 }
 cout<<ans<<"\n";
 for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
}