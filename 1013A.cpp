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
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int k=1;
    int ans=1;
    while(k--)
    {
        int cur=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            cur+=x;
        }
        if(cur>sum)
        {
            ans=0;
        }
        else
        {
            sum=cur;
        }
    }
    if(ans)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}