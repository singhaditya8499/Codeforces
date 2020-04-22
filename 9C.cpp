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
ll ans=0;
void solve(ll x,ll n)
{
    if(x<=n)
    {
        ans++;
    }
    else
        return;
    solve(x*10+1,n);
    solve(x*10+0,n);
}
int main()
{
    ll n;
    cin>>n;
    solve((ll)1,n);
    cout<<ans<<"\n";
}