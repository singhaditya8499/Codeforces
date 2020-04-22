#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(int a,int b)
{
    return a>b;
}
bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
     return true;
}
int main()
{
    ll n;
    cin >> n;
    ll ans = 1;
    ll x = n;
    for(ll i = 2;i * i <= n; i ++)  if(x % i == 0){
        ans *= (ll) i;
        while(x % i == 0)
            x /= i;
    }
    if(x > 1)
        ans *= x;
    cout << ans << endl;
    return 0;
}