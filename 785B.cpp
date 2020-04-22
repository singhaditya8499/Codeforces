#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(b.second!=a.second)
        return a.second<b.second;
    return a.first<b.first;
}
int ans,n;
int xa[]={1,0,-1,0};
int ya[]={0,1,0,-1};
int main()
{
    int n;
    cin>>n;
    ll arr1[n],dep1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i]>>dep1[i];
    }
    int m;
    cin>>m;
    ll arr2[m],dep2[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i]>>dep2[i];
    }
    sort(arr1,arr1+n);
    sort(dep1,dep1+n);
    sort(arr2,arr2+m);
    sort(dep2,dep2+m);
    ll ans=0;
    // for(int i=0;i<n;i++)
    // {
    //     int x=lower_bound(arr2,arr2+m,dep1[i])-arr2;
    //     if(x<m)
    //     {
    //         ans=max(ans,arr2[x]-dep1[i]);
    //     }
    // }
    // for(int i=0;i<m;i++)
    // {
    //     int x=lower_bound(arr1,arr1+n,dep2[i])-arr1;
    //     if(x<n)
    //     {
    //         ans=max(ans,arr1[x]-dep2[i]);
    //     }
    // }
    if(dep2[0]<=arr1[n-1])
    {
        ans=max(ans,arr1[n-1]-dep2[0]);
    }
    if(dep1[0]<=arr2[m-1])
    {
        ans=max(ans,arr2[m-1]-dep1[0]);
    }
    cout<<ans<<"\n";
}