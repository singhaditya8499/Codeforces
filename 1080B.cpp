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
    int q;
    cin>>q;
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        ll sumr=0,suml=0;
        if(r%2==0)
        {
            sumr=-((r/2)*(r/2));
            sumr+=((r/2)*(r/2+1));
        }
        else
        {
            sumr=((r/2)*(r/2+1));
            sumr-=(r/2+1)*(r/2+1);
        }
        r=l-1;
        if(r%2==0)
        {
            suml=-((r/2)*(r/2));
            suml+=((r/2)*(r/2+1));
        }
        else
        {
            suml=((r/2)*(r/2+1));
            suml-=(r/2+1)*(r/2+1);
        }
        cout<<sumr-suml<<"\n";
    }
}