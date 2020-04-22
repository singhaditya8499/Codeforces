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
    int t;
    cin>>t;
    while(t--)
    {
        ll s,a,b,c;
        cin>>s>>a>>b>>c;
        ll ans=(s/c)+((s/c)/a)*b;
        cout<<ans<<"\n";
    }
}