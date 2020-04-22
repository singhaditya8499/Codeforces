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
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans+arr[i]*max(ll(1),x);
        x--;
    }
    cout<<ans<<"\n";
}