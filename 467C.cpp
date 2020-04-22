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
  int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    ll arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
        arr[i]+=arr[i-1];
    ll ans[k+1][n+1];
    memset(ans,0,sizeof ans);
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i*m>j)
                ans[i][j]=0;
            else
            {
                ans[i][j]=max(ans[i][j-1],ans[i-1][j-m]+arr[j]-arr[j-m]);
            }
        }
    }
    cout<<ans[k][n]<<"\n";
}