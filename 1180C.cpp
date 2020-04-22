#include<bits/stdc++.h>
using namespace std;
 typedef unsigned long long int ull;
typedef long long int ll;
 #define mod 1000000007
 int main()
{
 int n,q;
 cin>>n>>q;
 ll arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 ll ma=-1,pos=-1;
 for(int i=0;i<n;i++)
 {
  if(arr[i]>ma)
  {
   ma=arr[i];
   pos=i;
  }
 }
 ll arr1[n];
 arr1[0]=arr[pos];
 int i=1,j=pos+1;
 while(j<n)
 {
  arr1[i]=arr[j];
  i++;
  j++;
 }
 j=0;
 while(j<pos)
 {
  arr1[i]=arr[j];
  j++;
  i++;
 }
 // for(int i=0;i<n;i++)
 //  cout<<arr1[i]<<" ";
 // cout<<endl;
 ll first[n+1];
 ll second[n+1];
 for(int i=1;i<n;i++)
 {
  first[i]=arr[0];
  second[i]=arr[i];
  if(arr[i]>arr[0])
  {
   int tmp=arr[0];
   arr[0]=arr[i];
   arr[i]=tmp;
  }
 }
 // for(int i=1;i<=pos;i++)
 //  cout<<first[i]<<" "<<second[i]<<"-\n";
 while(q--)
 {
  ll x;
  cin>>x;
  int tmp;
  if(x%(n-1)==0)
   tmp=n-1;
  else
   tmp=x%(n-1);
  if(x<n)
  cout<<first[x]<<" "<<second[x]<<"\n";
 else
  cout<<arr[0]<<" "<<arr[tmp]<<"\n";
 }
}