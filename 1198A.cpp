#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed

using namespace std;

template <typename T>
T InvMod(T a,T b,T &x,T &y)
{
    if(a==0)
    {
        x=0;
        y=1;
        return b;
    }
    T x1,y1;
    T g=InvMod(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return g;
}
ll fact(ll n)
{
    if(n==1)
    return 1;
    return (n%mod*fact(n-1)%mod)%mod;
}
void solve(vector<ll> &v,int &ans,int x,int start)
{
    if(x*2>v[v.size()-1])
    {
        v.erase(v.begin()+start-1);
        return;
    }
    int f=lower_bound(v.begin()+start,v.end(),2*x)-v.begin();
    // ans--;
    solve(v,ans,v[f],f+1);
    v.erase(v.begin()+start-1);

}
int main()
{
    int n,in;
    cin>>n>>in;
    in=in*8;
    int k=in/n;
    int distinct=pow(2,k);
    unordered_map<int,int> m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
        m[x]++;
    }
    if(distinct>=n)
    {
        cout<<0<<"\n";
        return 0;
    }
    vector<pair<int,int> >v;
    for(auto i:m)
    {
        v.push_back(make_pair(i.first,i.second));
    }
    if(distinct>=v.size())
    {
        cout<<0<<"\n";
        return 0;
    }
    v.push_back(make_pair(0,0));
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++)
    {
        v[i].second=v[i].second+v[i-1].second;
    }
    int mini=INT_MAX;
    int begin=-1,end=-1;
    for(int i=1;i<=v.size()-distinct;i++)
    {
        int cnt=v[i-1].second;
        cnt+=(v[v.size()-1].second-v[i+distinct-1].second);
        if(cnt<mini)
        {
            mini=cnt;
            begin=v[i].first;
            end=v[i+distinct-1].first;
        }
    }
    cout<<mini<<"\n";
}

