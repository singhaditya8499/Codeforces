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
 ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
 bool isprime(ll x)
{
    if(x==1)
        return false;
    if(x==2)
        return true;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(n==1||n==2||n==3)
    {
        cout<<"NO\n";
        return 0;
    }
    if(n==4)
    {
        int cur=1;
        cout<<"YES\n";
        cout<<"1 * 2 = 2\n";
        cout<<"2 * 3 = 6\n";
        cout<<"6 * 4 = 24\n";
        return 0;
    }
    if(n==5)
    {
        cout<<"YES\n";
        cout<<"3 - 1 = 2\n";
        cout<<"2 + 2 = 4\n";
        cout<<"5 * 4 = 20\n";
        cout<<"20 + 4 = 24\n";
        return 0;
    }
    cout<<"YES\n";
    cout<<n<<" - "<<n-1<<" = "<<1<<"\n";
    cout<<"1 - 1 = 0\n";
    for(int i=n-2;i>=5;i--)
    {
        cout<<i<<" * 0 = 0\n";
    }
    cout<<"2 * 3 = 6\n";
    cout<<"6 * 4 = 24\n";
    cout<<"24 + 0 = 24\n";
}