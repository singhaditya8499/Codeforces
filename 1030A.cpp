#include<iostream>
#include<string>
#include<cmath>
using namespace std;
  #define pi 3.1415
typedef long long ull;
 int main()
{
 int n;
 cin>>n;
 int ans=0;
 int arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
  if(arr[i]==1)
   ans=1;
 }
 if(ans)
  cout<<"hard\n";
 else
  cout<<"easy\n";
}