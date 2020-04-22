#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
  int main()
{
    ll n,l,r,x;
    cin>>n>>l>>r>>x;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans=0;
    for(int i=1;i<(1<<n);i++)
    {
        ll ma=0,mi=mod+100,sum=0;
        for(int j=0;j<n;j++)
        {
            if((1<<j)&i)
            {
                mi=min(mi,arr[j]);
                ma=max(ma,arr[j]);
                sum+=arr[j];
            }
        }
        if((ma-mi)>=x&&sum>=l&&sum<=r)
            ans++;
    }
    cout<<ans<<"\n";
}