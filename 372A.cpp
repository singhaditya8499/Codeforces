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
    int n;
    cin>>n;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());    
    int ans=n;
    int mid=n/2;
    for(int i=0;i<n/2;i++)
    {
        while(mid<v.size())
        {
            if(v[i]*2<=v[mid])
            {
                ans--;
                mid++;
                break;
            }
            else
            {
                mid++;
            } 
        }
        if(mid==n)
        break;
    }
    cout<<ans<<"\n";
}

