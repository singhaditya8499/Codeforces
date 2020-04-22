#include<bits/stdc++.h>
typedef long long ll;
#define pi 3.1415926535
#define mod 100000000                       //change when needed
 using namespace std;
 int solve(int arr[],int n)
{
    int ans=0;
    for(int j=1;j<n;j++)
    {
        int left=0,right=0;
        for(int i=j-1;i>=0;i--)
        {
            left=left^arr[i];
            right=0;
            for(int k=j;k<n;k++)
            {
                right=right^arr[k];
                if(left==right)
                {
                    cout<<i<<" "<<j<<" "<<k<<"\n";
                    ans++;
                }
            }
        }
    }
    return ans;
}
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int t[n];
    for(int i=0;i<n;i++)
    cin>>t[i];
    int pre[n+10],suf[n+10];
    memset(pre,0,sizeof pre);
    memset(suf,0,sizeof suf);
    for(int i=1;i<=n;i++)
    {
        if(t[i-1]==1)
        pre[i]=pre[i-1]+arr[i-1];
        else
        pre[i]=pre[i-1];
    }
    for(int i=n;i>=1;i--)
    {
        if(t[i-1]==1)
        suf[i]=arr[i-1]+suf[i+1];
        else
        suf[i]=suf[i+1];
    }
    // for(int i=1;i<=n;i++)
    // cout<<pre[i]<<" "<<suf[i]<<"\n";
    int all[n+10];
    memset(all,0,sizeof all);
    for(int i=1;i<=n;i++)
    all[i]=all[i-1]+arr[i-1];
    int ans=-1;
    for(int i=1;i<=n-k+1;i++)
    {
        int tmp=0;
        tmp+=all[i+k-1]-all[i-1];
        // cout<<tmp<<" "<<suf[i+k]<<" "<<pre[i-1]<<"\n";
        tmp+=suf[i+k]+pre[i-1];
        ans=max(ans,tmp);
    }
    cout<<ans<<"\n";
}