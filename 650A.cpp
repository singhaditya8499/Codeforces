#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n;
    cin>>n;
    map<ll,ll>x,y;
    map<pair<ll,ll>,ll> m;
    for(int i=0;i<n;i++)
    {
        ll xx,yy;
        cin>>xx>>yy;
        x[xx]+=1;
        y[yy]+=1;
        m[make_pair(xx,yy)]+=1;
    }
    ll ans=0;
    map<ll,ll>::iterator it;
    for(it=x.begin();it!=x.end();it++)
    {
        ans=ans+((it->second)*(it->second-1))/2;
    }
    for(it=y.begin();it!=y.end();it++)
    {
        ans=ans+((it->second)*(it->second-1))/2;
    }
    map<pair<ll,ll>,ll>::iterator itt;
    for(itt=m.begin();itt!=m.end();itt++)
    {
        ans=ans-(itt->second*(itt->second-1))/2;
    }
    cout<<ans<<"\n";
}