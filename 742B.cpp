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
bool cmp(pair<ll,int> a,pair<ll,int> b)
{
    if(a.first!=b.first)
    return a.first<b.first;
     return a.second>=b.second;
}
 int main()
{
    int n,x;
    cin>>n>>x;
    map<int,int> m;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        m[arr[i]^x]+=1;
    }
    ll ans=0;
    if(x==0)
    {
        for(int i=0;i<n;i++)
        {
            if(m.find(arr[i])!=m.end())
            {
                ans+=m[arr[i]]-1;
            }
        }
        cout<<ans/2<<"\n";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(m.find(arr[i])!=m.end())
        ans=ans+(m[arr[i]]);
    }
    cout<<ans/2<<"\n";
}