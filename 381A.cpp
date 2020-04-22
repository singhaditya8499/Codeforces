#include<iostream>
#include<string>
#include<cmath>
#include<map>
#include<cwchar>
using namespace std;
  #define pi 3.1415
typedef unsigned long long ull;
 int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 int ans=0,ans1=0;
 int i=0,j=n-1,cnt=0;
 while(i<=j)
 {
  if(cnt%2==0)
  {
   if(arr[i]>arr[j])
   {
    ans+=arr[i];
    i++;
    cnt++;
   }
   else
   {
    ans+=arr[j];
    j--;
    cnt++;
   }
  }
  else
  {
   if(arr[i]>arr[j])
   {
    ans1+=arr[i];
    i++;
   }
   else
   {
    ans1+=arr[j];
    j--;
   }
   cnt++;
  }
 }
 cout<<ans<<" "<<ans1<<"\n";
}