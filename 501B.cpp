#include<bits/stdc++.h>
#include<utility>
using namespace std;
 int main()
{
 int n;
 cin>>n;
 string a,b;
 pair<string,string> ar[n];
 int j=0;
 for(int i=0;i<n;i++)
 {
  cin>>a>>b;
  int found=0;
  for(int k=0;k<j;k++)
  {
   if(ar[k].second==a)
   {
    found=1;
    ar[k].second=b;
    break;
   }
  }
  if(found==0)
  {
   ar[j].first=a; 
   ar[j].second=b;
   j++;
  }
 }
 cout<<j<<"\n";
 for(int i=0;i<j;i++)
 cout<<ar[i].first<<" "<<ar[i].second<<"\n";
}