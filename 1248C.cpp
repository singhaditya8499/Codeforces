#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
template <typename T>
T InvMod(T a,T b,T &x,T &y)
{
    if(a==0)
    {
        x=0;
        y=1;
        return b;
    }
    T x1,y1;
    T g=InvMod(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return g;
}
ll fact(ll n)
{
    if(n==1)
    return 1;
    return (n%mod*fact(n-1)%mod)%mod;
}
bool check(ll sum,ll a,ll b)
{
    while(sum)
    {
        if(sum%10!=a&&sum%10!=b)
        return false;
        sum=sum/10;
    }
    return true;
}
int main() 
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    ll arr[100001];
    memset(arr,0,sizeof arr);
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=100000;i++)
    {
        arr[i]=(arr[i-1]%mod+arr[i-2]%mod)%mod;
    }
    ll ans=(arr[n]%mod+arr[m]%mod-1)%mod;
    if(ans<0)
    {
        ans=(ans+ans%mod)%mod;
    }
    ans=(2*ans)%mod;
    cout<<ans<<"\n";
    return 0; 
} 