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
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        while((a&&b>=2)||(b&&c>=2))
        {
            if(c>=2&&b)
            {
                ans+=3;
                c-=2;
                b--;
            }
            else if(a&&b>=2)
            {
                b-=2;
                ans+=3;
                a--;
            }
            // cout<<a<<" "<<b<<" "<<c<<"\n";
        }
        cout<<ans<<"\n";
    }
    return 0; 
} 