#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b)
{
    if(a.second.second!=b.second.second)
        return a.second.second<b.second.second;
    else
    {
        if(a.first!=b.first)
            return a.first<b.first;
        else
        {
            return a.second.first>b.second.first;
        }
    }
}
 int main()
{
    ll a=0,b=1;
    unordered_map<ll,pair<int,int> > m;
    ll c=a+b;
    while(c<=mod)
    {
        m[c]=make_pair(a,b);
        a=b;
        b=c;
        c=a+b;
    }
    ll n;
    cin>>n;
    if(n==0)
    {
        cout<<0<<" "<<0<<" "<<0<<"\n";
        return 0;
    }
    if(n==1)
    {
        cout<<1<<" "<<"0 0\n";
        return 0;
    }
    if(m.find(n)!=m.end())
    {
        cout<<m[n].first<<" "<<m[n].second<<" "<<0<<"\n";
    }
    else
        cout<<"I'm too stupid to solve this problem\n";
}