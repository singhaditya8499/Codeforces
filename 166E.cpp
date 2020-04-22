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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll ans[n+1][2];
    memset(ans,0,sizeof ans);
    ans[0][0]=0;
    ans[0][1]=1;
    for(int i=1;i<=n;i++)
    {
        ans[i][1]=(3*ans[i-1][0])%mod;
        ans[i][0]=(2*ans[i-1][0]+ans[i-1][1])%mod;
    }
    cout<<ans[n][1]<<"\n";
}