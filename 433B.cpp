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
    ll arr[n+1],sarr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i+1];
        sarr[i+1]=arr[i+1];
    }
    sort(sarr+1,sarr+1+n);
    for(int i=1;i<=n;i++)
    {
        arr[i]=arr[i]+arr[i-1];
        sarr[i]=sarr[i]+sarr[i-1];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1)
        {
            cout<<arr[r]-arr[l-1]<<"\n";
        }
        else
        {
            cout<<sarr[r]-sarr[l-1]<<"\n";
        }
    }
}