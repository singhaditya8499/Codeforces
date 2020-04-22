//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#define mod 1000000007
using namespace std;
 typedef long long ll;
 bool cmp(int a,int b)
{
 return a>b;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 sort(arr,arr+n);
 if(n%2==0)
 {
  cout<<arr[n/2-1]<<"\n";
 }
 else
 {
  cout<<arr[n/2]<<"\n";
 }
 return 0;
}