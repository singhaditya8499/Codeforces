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
    int n,q;
    cin>>n>>q;
    ll arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    sort(arr+1,arr+n+1);
    ll tmp[n+1];
    memset(tmp,0,sizeof tmp);
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        tmp[l]+=1;
        tmp[r+1]+=-1;
    }
    for(int i=1;i<=n;i++)
        tmp[i]+=tmp[i-1];
    sort(tmp+1,tmp+n+1);
    ll ans=0;
    for(int i=n;i>=1;i--)
        ans=ans+(arr[i]*tmp[i]);
    cout<<ans<<"\n";
}