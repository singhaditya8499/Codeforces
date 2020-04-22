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
    int n,m;
    cin>>n>>m;
    int ans=0;
    int arr[n+1];
    fill(arr,arr+n+1,0);
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        arr[x]+=1;
        int yes=1;
        for(int j=1;j<=n;j++)
        {
            if(arr[j]==0)
            {
                yes=0;
                break;
            }
        }
        if(yes)
        {
            ans++;
            for(int j=1;j<=n;j++)
                arr[j]-=1;
        }
    }
    cout<<ans<<"\n";
}