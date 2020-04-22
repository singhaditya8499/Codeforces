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
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 cout<<n+1<<"\n";
 cout<<1<<" "<<n<<" "<<500000<<"\n";
 for(int i=0;i<n;i++)
 {
  cout<<2<<" "<<i+1<<" "<<arr[i]+500000-i<<"\n";
 }
}