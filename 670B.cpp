#include<bits/stdc++.h>
#include<unordered_set>
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
    ll n,k;
    cin>>n>>k;
    map<ll,int> m;
    int cur=1;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        m[cur++]=x;
    }
    ll tmp;
    for(ll i=sqrt(k)-2;;i++)
    {
        if(((i*(i+1))/2)>=k)
        {
            tmp=i-1;
            break;
        }
    }
    k=k-(tmp*(tmp+1))/2;
    cout<<m[k]<<"\n";
}