#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
 ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
 bool isprime(ll x)
{
    if(x==1)
        return false;
    if(x==2)
        return true;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    ll r,g,b;
    cin>>r>>g>>b;
    ll ans=r/3+g/3+b/3;
    r-=1;
    g-=1;
    b-=1;
    if(r>=0&&g>=0&&b>=0)
    ans=max(ans,1+r/3+g/3+b/3);
    r-=1;
    g-=1;
    b-=1;
    if(r>=0&&g>=0&&b>=0)
    ans=max(ans,2+r/3+g/3+b/3);
    cout<<ans<<"\n";
}