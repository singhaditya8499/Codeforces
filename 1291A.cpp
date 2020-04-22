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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum=0;
        int even(0),odd(0);
        for(auto i:s)
        {
            sum+=(i-'0');
            if((i-'0')%2==0)
            even++;
            else
            odd++;
        }
        if((s[s.length()-1]-'0')%2!=0)
        {
            if(sum%2==0)
            {
                cout<<s<<"\n";
            }
            else
            {
                if(odd>1)
                {
                    int cnt=0;
                    ll ans=0;
                    for(auto i:s)
                    {
                        if(cnt>=2)
                        break;
                        if((i-'0')%2!=0)
                        {
                            ans=ans*10+(i-'0');
                            cnt++;
                        }
                    }
                    cout<<ans<<"\n";
                }
                else
                {
                    cout<<-1<<"\n";
                }
            }
        }
        else
        {
            if(odd>1)
            {
                int cnt=0;
                ll ans=0;
                for(auto i:s)
                {
                    if(cnt>=2)
                    break;
                    if((i-'0')%2!=0)
                    {
                        ans=ans*10+(i-'0');
                        cnt++;
                    }
                }
                cout<<ans<<"\n";
            }
            else
            {
                cout<<-1<<"\n";
            }
        }
    }
    return 0; 
} 