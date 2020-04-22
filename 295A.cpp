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
    int n,m,k;
    cin>>n>>m>>k;
    ll or_arr[n+10];
    ll temp[n+100];
    memset(temp,0,sizeof temp);
    for(int i=1;i<=n;i++)
        cin>>or_arr[i];
    or_arr[0]=0;
    ll arr[m+10];
    memset(arr,0,sizeof arr);
    pair<ll,pair<ll,ll> > x[m+10];
    for(int i=1;i<=m;i++)
    {
        cin>>x[i].first>>x[i].second.first>>x[i].second.second;
    }
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a]+=1;
        arr[b+1]-=1;
    }
    for(int i=1;i<=m;i++)
        arr[i+1]+=arr[i];
    for(int i=1;i<=m;i++)
    {
        x[i].second.second*=arr[i];
    }
    // for(int i=1;i<=m;i++)
    //     cout<<x[i].second.second<<" ";
    // cout<<endl;
    for(int i=1;i<=m;i++)
    {
        temp[x[i].first]+=x[i].second.second;
        temp[x[i].second.first+1]-=x[i].second.second;
    }
    for(int i=0;i<=n+1;i++)
    {
        temp[i+1]+=temp[i];
        // cout<<temp[i]<<" ";
    }
    // cout<<endl;
    for(int i=1;i<=n;i++)
        cout<<or_arr[i]+temp[i]<<" ";
    cout<<endl;
}