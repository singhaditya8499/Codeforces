#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,ma;
 cin>>n>>ma;
 int arr[ma];
 unordered_map<int,int> m;
 for(int i=0;i<ma;i++)
 {
  cin>>arr[i];
  m[arr[i]]++;
 }
 int ans=0;
 for(int i=1;i<=ma;i++)
 {
  int cnt=0;
  for(unordered_map<int,int>::iterator it=m.begin();it!=m.end();it++)
  {
   cnt+=(it->second/i);
  }
  if(cnt>=n)
   ans=i;
     else
     break;
 }
 cout<<ans<<"\n";
}