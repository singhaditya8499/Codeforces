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
    int n,w,h;
    cin>>n>>w>>h;
    vector<pair<int,pair<int,int> > > v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a<=w||b<=h)
        continue;
        v.push_back(make_pair(a,make_pair(b,i)));
    }
    if(v.size()==0)
    {
        cout<<0<<"\n";
        return 0;
    }
    sort(v.begin(),v.end());
    int ans[v.size()];
    int updated[v.size()];
    for(int i=0;i<v.size();i++)
    {
        ans[i]=1;
        updated[i]=i;
    }
    for(int i=1;i<v.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[i].first>v[j].first&&v[i].second.first>v[j].second.first)
            {
                if(ans[i]<1+ans[j])
                {
                    ans[i]=1+ans[j];
                    updated[i]=j;
                }
            }
        }
    }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<"\n";
    //     cout<<ans[i]<<" "<<updated[i]<<"\n";
    // }
    int maa=INT_MIN;
    int index=-1;
    for(int i=0;i<v.size();i++)
    {
        if(ans[i]>maa)
        {
            maa=ans[i];
            index=i;
        }
    }
    cout<<maa<<"\n";
    stack<int> s;
    while(updated[index]!=index)
    {
        s.push(v[index].second.second+1);
        // vv.pu
        index=updated[index];
    }
    s.push(v[index].second.second+1);
    while(s.size())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

