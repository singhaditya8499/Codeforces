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
    ll n;
    cin>>n;
    vector<ll> v;
    ll x=0;
    generate(v,x);
    sort(v.begin(),v.end());
    for(int i=1;i<=v.size();i++)
    {
        if(v[i]==n)
        {
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}