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
    ll n;
    cin>>n;
    if(n<3){
        cout<<-1<<"\n";
        return 0;
    }
    if(n%2==0)
    {
        ll a=(n/2)*(n/2)-1;
        ll b=a+2;
        cout<<a<<" "<<b<<"\n";
    }
    else
    {
        ll a=(n*n-1)/2;
        ll b=a+1;
        cout<<a<<" "<<b<<"\n";
    }
}