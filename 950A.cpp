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
    int l,r,a;
    cin>>l>>r>>a;
    int diff=abs(l-r);
    if(a<diff)
    {
        if(l<r)
        {
            cout<<2*(l+a)<<"\n";
        }
        else
        {
            cout<<2*(r+a)<<"\n";
        }
    }
    else
    {
        int ans=2*max(l,r);
        a=a-diff;
        ans=ans+(a/2)*2;
        cout<<ans<<"\n";
    }
}