#include<bits/stdc++.h>
using namespace std;
 typedef unsigned long long int ull;
typedef long long int ll;
 #define mod 1000000007
 int main()
{
 int arr[3],d;
 cin>>arr[0]>>arr[1]>>arr[2]>>d;
 sort(arr,arr+3);
 int ans=0;
 if(arr[1]-arr[0]<d)
  ans=ans+(d-arr[1]+arr[0]);
 if(arr[2]-arr[1]<d)
  ans=ans+(d-arr[2]+arr[1]);
 cout<<ans<<"\n";
}