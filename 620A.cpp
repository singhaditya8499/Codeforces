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
 ll a,b;
 cin>>a>>b;
 ll x,y;
 cin>>x>>y;
 cout<<max(abs(x-a),abs(y-b))<<"\n";
}