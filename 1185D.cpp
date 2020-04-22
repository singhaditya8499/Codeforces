#include<bits/stdc++.h>
using namespace std;
 typedef unsigned long long int ull;
typedef long long int ll;
 #define mod 1000000007
 int main()
{
 int n;
 cin>>n;
 pair<ll,int> arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i].first;
  arr[i].second=i+1;
 }
 sort(arr,arr+n);
 //first element
 set<int> s,s1;
 for(int i=2;i<n;i++)
 {
  s.insert(arr[i].first-arr[i-1].first);
 }
 if(s.size()<=1)
 {
  cout<<arr[0].second<<"\n";
  return 0;
 }
  //second element
 if(2<n)
 {
  s1.insert(arr[2].first-arr[0].first);
 }
 for(int i=3;i<n;i++)
 {
  s1.insert(arr[i].first-arr[i-1].first);
 }
 if(s1.size()<=1)
 {
  cout<<arr[1].second<<"\n";
  return 0;
 }
  int d=arr[1].first-arr[0].first;
 int cnt=0,pos=-1,inc=0;
 for(int i=2;i<n;i++)
 {
  if(inc)
  {
   if(arr[i].first-arr[i-2].first!=d)
   {
    cnt++;
    break;
   }
   else
   {
    inc=0;
   }
  }
  else
  {
   if(arr[i].first-arr[i-1].first!=d)
   {
    cnt++;
    pos=arr[i].second;
    inc++;
   }
  }
 }
 if(cnt==0)
 {
  cout<<1<<"\n";
 }
 else if(cnt==1)
 {
  cout<<pos<<"\n";
 }
 else
 {
  cout<<-1<<"\n";
 }
 }