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
    int n,k,d;
    cin>>n>>k>>d;
    ll ans[n+1][2];
    memset(ans,0,sizeof ans);
    ans[0][0]=1;
    ans[0][1]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(j>i)
                break;
            if(j>=d)
            {
                ans[i][1]=(ans[i][1]%mod+ans[i-j][0]%mod+ans[i-j][1]%mod)%mod;
            }
            else
            {
                ans[i][0]=(ans[i][0]%mod+ans[i-j][0]%mod)%mod;
                ans[i][1]=(ans[i][1]%mod+ans[i-j][1]%mod)%mod;
            }
        }
        if(ans[i][0]<0)
            ans[i][0]+=mod;
        if(ans[i][1]<0)
            ans[i][1]+=mod;
        //cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";
    }
    if(ans[n][1]<0)
        ans[n][1]+=mod;
    cout<<ans[n][1]<<"\n";
}