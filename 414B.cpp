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
    int n,k;
    cin>>n>>k;
    ll ans[k+1][n+1];
    memset(ans,0,sizeof ans);
    for(int i=1;i<=n;i++)
        ans[1][i]=1;
    // for(int i=0;i<=k;i++)
    // {
    //     for(int j=0;j<=n;j++)
    //         ans[i][j]=1;
    // }
    vector<int> v[n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j%i==0)
                v[i].push_back(j);
        }
    }
    for(int i=2;i<=k;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int l=1;j*l<=n;l++)
            {
                ans[i][j*l]=(ans[i][j*l]%mod+ans[i-1][j]%mod)%mod;
            }
        }
    }
    ll anss=0;
    for(int i=1;i<=n;i++)
    {
        anss=(anss%mod+ans[k][i]%mod)%mod;
    }
    cout<<anss<<"\n";
}