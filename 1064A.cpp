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
 int arr[3];
 cin>>arr[0]>>arr[1]>>arr[2];
 sort(arr,arr+3);
 if(arr[0]+arr[1]<=arr[2])
 {
  cout<<arr[2]-(arr[1]+arr[0])+1<<"\n";
 }
 else
 {
  cout<<0<<"\n";
 }
}