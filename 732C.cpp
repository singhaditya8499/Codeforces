#include<bits/stdc++.h>
#include<unordered_map>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a,b,c;
    cin>>a>>b>>c;
    ll f=max(a,max(b,c))-1;
    ll ans=max(f-a,ll(0))+max(f-b,ll(0))+max(f-c,ll(0));
    cout<<ans<<"\n";
}