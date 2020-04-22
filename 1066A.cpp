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
    int q;
    cin>>q;
    while(q--)
    {
        ll l,v,a,b;
        cin>>l>>v>>a>>b;
        ll total=l/v;
        total-=(b/v-(a-1)/v);
        cout<<total<<"\n";
    }
}