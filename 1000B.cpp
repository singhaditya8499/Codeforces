#include<vector>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
 int n;
 cin>>n;
 long int m;
 cin>>m;
 vector<int> v;
 v.push_back(0);
 for(int i=0;i<n;i++)
 {
  long int x;
  cin>>x;
  v.push_back(x);
 }
 v.push_back(m);
 pair<long int,long int> arr[n+2],brr[n+2];
 arr[n+1].first=0,arr[n+1].second=0;
 brr[0].first=0,brr[0].second=0;
 int change;
 if(n%2==0)
  change=1;
 else
  change=0;
 for(int i=n;i>=0;i--)
 {
  if(change==0)
  {
   arr[i].second=arr[i+1].second+v[i+1]-v[i];
   arr[i].first=arr[i+1].first;
   change=1;
   //cout<<v[i]<<"-";
  }
  else
  {
   arr[i].second=arr[i+1].second;
   arr[i].first=arr[i+1].first+v[i+1]-v[i];
   change=0;
  }
 }
 change=1;
 for(int i=1;i<n+2;i++)
 {
  if(change)
  {
   brr[i].first=brr[i-1].first+v[i]-v[i-1];
   brr[i].second=brr[i-1].second;
   change=0;
  }
  else
  {
   brr[i].first=brr[i-1].first;
   brr[i].second=brr[i-1].second+v[i]-v[i-1];
   change=1;
  }
 }
 long int ans=brr[n+1].first;
 change=1;
 for(int i=1;i<n+2;i++)
 {
  if(change)
  {
   ans=max(ans,brr[i-1].first+v[i]-1-v[i-1]+arr[i].second);
   change=0;
  }
  else
  {
   ans=max(ans,brr[i-1].first+v[i]-1-v[i-1]+arr[i].second);
  }
 }
 cout<<ans;
}