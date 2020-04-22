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
 int arr[6];
 for(int i=0;i<6;i++)
  cin>>arr[i];
 int ans=0;
 ans=pow((arr[0]+arr[1]+arr[2]),2)-arr[0]*arr[0]-arr[2]*arr[2]-arr[4]*arr[4];
 cout<<ans<<"\n";
}