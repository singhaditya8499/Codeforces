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
 ll solve(ll a,ll b)
{
    if(b==0)
        return 1;
    if(b==1)
        return a%mod;
    if(b%2==0)
    {
        ll temp=solve(a,b/2);
        return (temp%mod*temp%mod)%mod;
    }
    return (a%mod*solve(a,b-1)%mod)%mod;
}
int main()
{
    ll n;
    cin>>n;
    ll x=solve(ll(3),ll(3*n))-solve(ll(7),n);
    if(x<0)
        x=x+mod;
    cout<<x<<"\n";
}