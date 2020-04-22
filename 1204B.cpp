#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define pi 3.1415926535
#define mod 379                       //change when needed
 using namespace std;
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int l,r;
    cin>>l>>r;
    ll ans=0;
    ans=pow(2,l)-1;
    ans=ans+(n-l);
    cout<<ans<<" ";
    ans=pow(2,r)-1;
    ans+=(n-r)*pow(2,r-1);
    cout<<ans<<"\n";
}