#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<stack>
#include<set>
#include<utility>
#include<map>
#include<numeric> //iota
using namespace std;
 //**************//
typedef unsigned long long ull;
//**************//
 ull ggcd(ull a,ull b)
{
 if(b==0)
  return a;
 return ggcd(b,a%b);
}
int main()
{
 ull a,b,x,y;
 cin>>a>>b>>x>>y;
 ull ans=0;
 //ans=min(float(a/x),float(b/y));
 ull gcd=ggcd(x,y);
 //cout<<gcd;
 x=x/gcd;
 y=y/gcd;
 ans=min(ull(a/x),ull(b/y));
 cout<<ans;
}