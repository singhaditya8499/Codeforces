#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
bool cmp(pair<ll,int> a,pair<ll,int> b)
{
    if(a.first!=b.first)
    return a.first<b.first;
     return a.second>=b.second;
}
 int main()
{
    int h,w;
    cin>>h>>w;
    string s[h+1];
    for(int i=1;i<=h;i++)
    {
        cin>>s[i];
        s[i]="#"+s[i];
    }
    ll dp[h+1][w+2];
    ll dp1[h+1][w+2];
    memset(dp1,0,sizeof dp1);
    memset(dp,0,sizeof dp);
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w+1;j++)
        {
            if(s[i][j]=='.')
            {
                if(i-1>=1&&s[i-1][j]=='.')
                {
                    dp[i][j]+=1;
                }
            }
            dp[i][j]+=(dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]);
        }
    }
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w+1;j++)
        {
            if(s[i][j]=='.')
            {
                if(j-1>=1&&s[i][j-1]=='.')
                    dp1[i][j]=1;
            }
            dp1[i][j]+=(dp1[i-1][j]+dp1[i][j-1]-dp1[i-1][j-1]);
        }
    }
    // for(int i=0;i<=h;i++)
    // {
    //     for(int j=0;j<=w;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        ll ans=0;
        ans=dp[c][d]-dp[c][b-1]-dp[a][d]+dp[a][b-1];
        ans+=dp1[c][d]-dp1[c][b]-dp1[a-1][d]+dp1[a-1][b];
        cout<<ans<<"\n";
    }
}