#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
  int main()
{
    ll n;
    cin>>n;
    int ans=0;
    ll cur=1;
    while(n>0)
    {
        ans++;
        n=n-cur;
        cur=cur*2;
    }
    cout<<ans<<"\n";
}