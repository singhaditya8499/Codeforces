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
    int t,k;
    cin>>t>>k;
    ll ans[100004];
    memset(ans,0,sizeof ans);
    ans[0]=1;
    for(int i=1;i<k;i++)
    {
        ans[i]=1;
    }
    for(int i=k;i<=100000;i++)
    {
        ans[i]=(ans[i-1]%mod+ans[i-k]%mod)%mod;
    }
    for(int i=1;i<=100000;i++)
    {
        ans[i]=(ans[i-1]%mod+ans[i]%mod)%mod;
    }
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        ll anss=ans[b]-ans[a-1];
        if(anss<0)
            anss+=mod;
        cout<<anss<<"\n";
    }
}