#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(ll a,ll b)
{
    return a>b;
}
int main()
{
    ll n,t,c;
    cin>>n>>t>>c;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    map<ll,ll> m;
    set<ll> s;
    for(int i=0;i<c;i++)
    {
        if(m.find(arr[i])==m.end())
        {
            m[arr[i]]+=1;
            s.insert(arr[i]);
        }
        else
        {
            m[arr[i]]+=1;
        }
    }
    ll maxele=*(s.rbegin());
    //cout<<maxele<<"--\n";
    int ans=0;
    if(maxele<=t)
        ans++;
    // cout<<ans<<"--\n";
    for(int i=c;i<n;i++)
    {
        if(m[arr[i-c]]==1)
        {
            m.erase(arr[i-c]);
            s.erase(arr[i-c]);
        }
        else
        {
            m[arr[i-c]]-=1;
        }
        m[arr[i]]+=1;
        s.insert(arr[i]);
        maxele=*s.rbegin();
        if(maxele<=t)
            ans++;
    }
    cout<<ans<<"\n";
}