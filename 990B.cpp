#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
 int main()
{
 long long int n,k;
 cin>>n>>k;
 map<int,int> m;
 int arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
  m[arr[i]]++;
 }
  sort(arr,arr+n);
 for(int i=0;i<n;i++)
 {
  int j=i+1;
  while(j<n&&arr[j]==arr[i])
   j++;
  i=j-1;
  if(i!=n-1)
  {
   if(arr[i]+k>=arr[i+1])
   {
    m[arr[i]]=0;
   }
  }
 }
 map<int,int>::iterator it;
 int ans=0;
 for(it=m.begin();it!=m.end();it++)
 {
  if((*it).second!=0)
  ans=ans+(*it).second;
 }
 cout<<ans;
 return 0;
}