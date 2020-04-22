#include<bits/stdc++.h>
using namespace std;
 typedef unsigned long long int ull;
typedef long long int ll;
 #define mod 1000000007
 int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n,s,t;
  cin>>n>>s>>t;
  if(s+t<=n)
  {
   cout<<max(s,t)+1<<"\n";
  }
  else
  {
   int x=s+t-n;
   cout<<max(s-x,t-x)+1<<"\n";
  }
 }
}