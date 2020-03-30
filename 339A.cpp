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


int main()
{
    string s;
    cin>>s;
    vector<char> v;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='+')
        continue;
        else
        {
            v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    string ans="";
    for(int i=0;i<v.size();i++)
    {
        if(ans=="")
        {
            ans=v[i];
        }
        else
        {
            string tmp="+";
            tmp=tmp+v[i];
            ans=ans+tmp;
        }
    }
    cout<<ans<<"\n";
    return 0;
}