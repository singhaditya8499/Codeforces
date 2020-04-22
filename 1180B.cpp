#include<bits/stdc++.h>
using namespace std;
 typedef unsigned long long int ull;
typedef long long int ll;
 #define mod 1000000007
 int main()
{
 int n;
 cin>>n;
 ll arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 for(int i=0;i<n;i++)
 {
  if(arr[i]>0)
  {
   arr[i]=-(arr[i]+1);
  }
  else if(arr[i]==0)
   arr[i]=-1;
 }
 if(n%2==0)
 {
  for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
  return 0;
 }
 ll mx=1,pos=-1;
 for(int i=0;i<n;i++)
  if(arr[i]<mx)
  {
   mx=arr[i];
   pos=i;
  }
 arr[pos]=-arr[pos]-1;
 for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
 return 0;
}