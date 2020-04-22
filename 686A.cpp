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
 int n,m;
 cin>>n>>m;
 ll total=m,dis=0;
 for(int i=0;i<n;i++)
 {
  char c;
  cin>>c;
  ll x;
  cin>>x;
  if(c=='+')
   total+=x;
  else
  {
   if(x>total)
    dis++;
   else
   {
    total-=x;
   }
  }
 }
 cout<<total<<" "<<dis<<"\n";
 return 0;
}