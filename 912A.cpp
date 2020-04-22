#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 bool isvowel(char c)
{
 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  return true;
 return false;
}
 int main()
{
    ll a,b;
    cin>>a>>b;
    ll x,y,z;
    cin>>x>>y>>z;
    cout<<max((ll)0,2*x+y-a)+max((ll)0,y+3*z-b)<<"\n";
}