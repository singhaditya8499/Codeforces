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
int main()
{
    ll n,k;
    cin>>n>>k;
    ll low=1,high=1e18;
    while(low<high)
    {
        ll mid=low+(high-low)/2;
        ll pages=0,aa=1;
        while(mid/aa!=0)
        {
            pages+=mid/aa;
            aa=aa*k;
        }
        // cout<<mid<<" "<<pages<<"\n";
        if(pages>=n)
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<low<<"\n";
}