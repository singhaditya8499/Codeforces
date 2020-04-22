#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<stack>
#include<set>
#include<utility>
#include<map>
#include<numeric> //iota
#include<bits/stdc++.h>
using namespace std;
 //**************//
typedef unsigned long long ull;
//**************//
 ull ggcd(ull a,ull b)
{
 if(b==0)
  return a;
 return ggcd(b,a%b);
}
int main()
{
 int n,m;
 cin>>n>>m;
 int arr[n];
 int mi=ceil(float(m)/n);
 int mians=1000000,maans=-1;
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 sort(arr,arr+n);
 int a=m,i=0;
 while(a&&i<(n-1))
 {
  if(a==0)
   break;
  int x=min(a,arr[n-1]-arr[i]);
  arr[i]+=x;
  a=a-x;
  if(a==0)
   break;
  //cout<<i<<" "<<arr[i]<<" "<<a<<"\n";
  i++;
 }
 cout<<ceil(float(a)/n)+arr[n-1]<<" "<<arr[n-1]+m;
}