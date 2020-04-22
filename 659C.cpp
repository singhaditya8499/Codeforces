#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(ll a,ll b)
{
    return a>b;
}
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    int cnt=0;
    vector<ll> ans;
    for(int i=1;;i++)
    {
        if(v.size())
        {
            if(v[v.size()-1]==i)
            {
                v.pop_back();
            }
            else
            {
                if(i<=m)
                {
                    cnt++;
                    ans.push_back(i);
                    m=m-i;
                }
                else
                    break;
            }
        }
        else
        {
            if(i<=m)
            {
                cnt++;
                ans.push_back(i);
                m=m-i;
            }
            else
                break;
        }
    }
    cout<<cnt<<"\n";
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}