#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b)
{
    if(a.second.second!=b.second.second)
        return a.second.second<b.second.second;
    else
    {
        if(a.first!=b.first)
            return a.first<b.first;
        else
        {
            return a.second.first>b.second.first;
        }
    }
}
 int main()
{
    int n;
    cin>>n;
    ll arr[n],brr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i-1];
        brr[n-i]=arr[i-1];
    }
    for(int i=1;i<n;i++)
        arr[i]+=arr[i-1];
    for(int i=1;i<n;i++)
        brr[i]+=brr[i-1];
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        int x=lower_bound(brr,brr+n,arr[i])-brr;
        if(x+2+i<=n&&arr[i]==brr[x])
        {
            ans=max(ans,arr[i]);
        }
    }
    cout<<ans<<"\n";
}