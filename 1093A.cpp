#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
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
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<"\n";
        }
        else
        {
            cout<<1+(n-3)/2<<"\n";
        }
    }
}