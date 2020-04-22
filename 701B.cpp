#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 typedef long long ll;
ll gcd(ll a,ll b)
{
 if(b==0)
  return a;
 return gcd(b,a%b);
}
int main()
{
 ll n,m;
 cin>>n>>m;
 set<ll> col,row;
 ll rem=n*n;
 int prevr=0,prevc=0;
 for(int i=0;i<m;i++)
 {
  ll x,y;
  cin>>x>>y;
  if(row.find(x)==row.end()&&col.find(y)==col.end())
  {
   rem=rem-n+col.size();
   row.insert(x);
   rem=rem-n+row.size();
   col.insert(y);
  }
  else
  {
   if(row.find(x)==row.end())
   {
    row.insert(x);
    rem=rem-n+col.size();
   }
   if(col.find(y)==col.end())
   {
    col.insert(y);
    rem=rem-n+row.size();
   }
  }
  cout<<rem<<" "; 
 }
 cout<<endl;
}