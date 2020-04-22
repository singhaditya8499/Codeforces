#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void generate(vector<ll> &v,ll &x)
{
    if(x>=10000000000)
        return;
    v.push_back(x);
    ll y=x*10+4;
    generate(v,y);
    y=x*10+7;
    generate(v,y);
}
int main()
{
    ll n,b,d,ans=0,k=0;
    cin>>n>>b>>d;
    while(n--)
    {
        ll a;
        cin>>a;
        if(b>=a)
            k+=a;
        if(k>d) 
            ans++,k=0;
    }
    cout<<ans<<"\n";
}