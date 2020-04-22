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
    int s,x1,x2,d1;
    cin>>s>>x1>>x2;
    int t1,t2;
    cin>>t1>>t2;
    int p,d;
    cin>>p>>d;
    if(t2<t1)
    {
        cout<<abs(x2-x1)*t2<<"\n";
        return 0;
    }
    if(x1>x2)
    {
        x1=s-x1;
        x2=s-x2;
        p=s-p;
        d=-d;
    }
    int foot=(x2-x1)*t2;
    int tmp=-1;
    if(d==-1)
    {
        tmp=(p+x2)*t1;
    }
    else
    {
        if(p<=x1)
            tmp=(x2-p)*t1;
        else
            tmp=((s-p)+s+x2)*t1;
    }
    cout<<min(foot,tmp)<<"\n";
}