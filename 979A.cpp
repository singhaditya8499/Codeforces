#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(ll a,ll b)
{
    return a>b;
}
int main()
{
    ll n;
    cin>>n;
    if(n==0)
    {
        cout<<0<<"\n";
        return 0;
    }
    if((n+1)%2==0)
    {
        cout<<(n+1)/2<<"\n";
    }
    else
    {
        cout<<n+1<<"\n";
    }
}