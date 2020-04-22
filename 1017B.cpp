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
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    ll cnt0=0,cnt1=0,cnt11=0,cnt00=0;
    // memset(cnt,0,sizeof cnt);
    for(int i=0;i<n;i++)
    {
        if(b[i]=='0')
        {
            if(a[i]=='1')
                cnt1++;
            else
                cnt0++;
        } 
        else
        {
            if(a[i]=='1')
                cnt11++;
            else
                cnt00++;
        }   
    }
    // cout<<(cnt0*(cnt11+cnt1))<<" "<<(cnt1*(cnt00+cnt0))<<" "<<cnt1*cnt0<<"\n";
    // cout<<cnt0<<" "<<cnt1<<" "<<cnt00<<" "<<cnt11<<"\n";
    ll ans=((cnt0*(cnt11+cnt1))+(cnt1*(cnt00+cnt0)))-(cnt1*cnt0);
    cout<<ans<<"\n";
    // cout<<ans<<"\n";
}