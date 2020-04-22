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
    ll n;
    double w;
    cin>>n>>w;
    ll arr[n*2];
    for(int i=0;i<2*n;i++)
        cin>>arr[i];
    sort(arr,arr+2*n);
    double tmp=min(double(arr[0]),double(arr[n])/double(2));
    // cout<<tmp<<"\n"
    double maxallowed=double(w)/double(n);
    // cout<<tmp*3.0*double(n)<<"\n";
    if(tmp*3.0*double(n)<=double(w))
    {
        double ans=double(n)*tmp*3.00;
        printf("%0.9f\n",ans);
        return 0;
    }
    tmp=tmp*3.0;
    printf("%0.9f\n",w);
}