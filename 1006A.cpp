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
 for(int i=0;i<n;i++)
 {
  int x;
  cin>>x;
  if(x%2==0)
   cout<<x-1<<" ";
  else
   cout<<x<<" ";
 }
 //cout<<ans<<"\n";
 return 0;
}