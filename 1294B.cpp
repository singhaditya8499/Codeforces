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
 bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first!=b.first)
    return a.second<b.second;
    return a.first<b.first;
}
 int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int> > v;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end());
        string ans="";
        pair<int,int> prev=make_pair(0,0);
        int poss=1;
        for(int i=0;i<n;i++)
        {
            if(v[i].second<prev.second||v[i].first<prev.first)
            {
                poss=0;
                break;
            }
            else
            {
                int right=v[i].first-prev.first;
                int up=v[i].second-prev.second;
                for(int j=0;j<right;j++)
                ans=ans+'R';
                for(int j=0;j<up;j++)
                ans=ans+'U';
                prev=v[i];
            }
        }
        if(poss)
        cout<<"YES\n"<<ans<<"\n";
        else
        cout<<"NO\n";
    }
}