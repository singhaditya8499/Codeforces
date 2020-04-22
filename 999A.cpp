#include<iostream>
using namespace std;
int main()
{
 int n,k;
 cin>>n>>k;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 int ans=0;
 int i=0;
 while(i<n)
 {
  if(arr[i]<=k)
  {
   ans++;
   i++;
  }
  else
  {
   break;
  }
 }
 int j=n-1;
 while(j>i)
 {
  if(arr[j]<=k)
  {
   ans++;
   j--;
  }
  else
   break;
 }
 cout<<ans;
}