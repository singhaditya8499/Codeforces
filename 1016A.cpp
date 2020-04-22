#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    ll cur=0;
    ll last=0;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        cur+=x;
        ans+=(cur/m);
        cur=cur%m;
        cout<<ans-last<<" ";
        last=ans;
    }
    cout<<"\n";
}