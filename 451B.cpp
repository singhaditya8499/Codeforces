//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#define mod 1000000007
using namespace std;
 typedef long long ll;
  int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 int cnt=0,curr=0;
 int start=0,end=0;
 for(int i=1;i<n;i++)
 {
  if(arr[i]<=arr[i-1])
  {
   curr++;
   end=i;
  }
  else
  {
   if(curr)
   cnt++;
   curr=0;
  }
 }
 if(curr)
  cnt++;
 if(cnt>=2)
 {
  cout<<"no\n";
  return 0;
 }
 start=end;
 while((start-1)>=0&&arr[start-1]>=arr[start])
  start--;
 //start=start+1;
 //cout<<start<<" "<<end<<"\n";
 if(start==0&&end==n-1)
 { 
  cout<<"yes\n";
  cout<<start+1<<" "<<end+1<<"\n";
 }
 else if(start==0)
 {
  if(arr[end+1]>=arr[start])
  {
   cout<<"yes\n";
   cout<<start+1<<" "<<end+1<<"\n";
  }
  else
  {
   cout<<"no\n";
  }
 }
 else if(end==n-1)
 {
  if(arr[start-1]<=arr[end])
  {
   cout<<"yes\n";
   cout<<start+1<<" "<<end+1<<"\n";
  }
  else
  {
   cout<<"no\n";
  }
 }
 else
 {
  if(arr[start-1]<=arr[end]&&arr[end+1]>=arr[start])
  {
   cout<<"yes\n";
   cout<<start+1<<" "<<end+1<<"\n";
  }
  else
  {
   cout<<"no\n";
  }
 }
 return 0;
}