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
    int n,k;
    cin>>n>>k;
    ll arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    arr[0]=0;
    for(int i=1;i<=n;i++)
    {
        arr[i]+=arr[i-1];
    }
    ll tmp[n+1];
    fill(tmp,tmp+n+1,0);
    for(int i=1;i<=n-k+1;i++)
    {
        tmp[i]=arr[i+k-1]-arr[i-1];
    }
    priority_queue<pair<ll,int>,vector<pair<ll,int> >,function<bool(pair<ll,int>,pair<ll,int> )> > q(cmp);
    pair<ll,int> tmp1[n+1];
    for(int i=0;i<=n;i++)
        tmp1[i].first=tmp1[i].second=0;
    for(int i=n-k+1;i>k;i--)
    {
        q.push(make_pair(arr[i+k-1]-arr[i-1],i));
        tmp1[i-k]=q.top();
    }
    ll ans=-1;
    pair<int,int> p;
    // for(int i=0;i<=n;i++)
    // {
    //     cout<<tmp[i]<<" "<<tmp1[i].first<<"\n";
    // }
    for(int i=1;i<=n;i++)
    {
        if(tmp[i]!=0&&tmp1[i].first!=0)
        {
            if((tmp[i]+tmp1[i].first)>ans)
            {
                ans=tmp[i]+tmp1[i].first;
                p.first=i;
                p.second=tmp1[i].second;
            }
        }
    }
    // cout<<q.top().first<<"\n";
    // q.pop();
    // cout<<q.top().first<<"\n";
    cout<<p.first<<" "<<p.second<<"\n";
}