#include<bits/stdc++.h>
typedef long long ll;
#define mod 100000000                       //change when needed
using namespace std;
int ans[105][105][2];
int n,m,k1,k2;
 ll solve(int n,int m,int flag)
{
    if(n==0&&m==0)
    return 1;
    if(ans[n][m][flag]!=-1)
    return ans[n][m][flag];
    long long res=0;
    if(!flag)
    {
        // long long res=0;
        for(int i=1;i<=k1&&(n-i)>=0;i++)
        {
            res+=solve(n-i,m,!flag);
            res=res%mod;
        }
    }
    else
    {
        // long long res=0;
        for(int i=1;i<=k2&&(m-i)>=0;i++)
        {
            res+=solve(n,m-i,!flag);
            res=res%mod;
        }
    }
    ans[n][m][flag]=res;
    return res;
}
 int main()
{
    cin>>n>>m>>k1>>k2;
    memset(ans,-1,sizeof ans);
    cout<<(solve(n,m,0)+solve(n,m,1))%mod;
}