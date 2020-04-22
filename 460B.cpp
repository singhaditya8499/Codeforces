#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
 ll solve(ll a,ll b)
{
    if(b==0)
        return 1;
    if(b==1)
        return a%mod;
    if(b%2==0)
    {
        ll temp=solve(a,b/2);
        return (temp%mod*temp%mod)%mod;
    }
    return (a%mod*solve(a,b-1)%mod)%mod;
}
vector<int> anss;
int summ(ll x)
{
    int ans=0;
    while(x)
    {
        ans=ans+(x%10);
        x=x/10;
    }
    return ans;
}
void solve(ll cur,ll sum,int size,int x)
{
    if(size>9)
        return;
    if(summ(cur)>x)
        return;
    // cout<<cur<<"\n";
    if(cur==sum)
    {
        anss.push_back(cur);
        cout<<x<<"\n";
    }
    int tmp=summ(cur);
    for(int i=0;i<=min(max(0,x-summ(cur)),9);i++)
    {
        solve(cur*10+i,sum,size+1,x);
    }
}
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    for(int i=1;i<=81;i++)
    {
        ll sum=pow(i,a)*b+c;
        if(sum<0)
            continue;
        int x=summ(sum);
        if(x==i&&sum<=1000000000)
        {
            anss.push_back(sum);
        }
    }
    cout<<anss.size()<<"\n";
    for(int i=0;i<anss.size();i++)
        cout<<anss[i]<<" ";
    cout<<endl;
}