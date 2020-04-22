#include<bits/stdc++.h>
 // #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#include<unordered_map>
#include<unordered_set>
#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
typedef unsigned long long ull;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
// using namespace __gnu_pbds;
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
void sieve(vector<int> &v)
{
    bool arr[1000004];
    memset(arr,true,sizeof arr);
    // memset(arr,0,sizeof arr);
    for(int i=2;i*i<=1000002;i++)
    {
        if(arr[i]==true)
        {
            v.push_back(i);
            for(int j=i*i;j<=1000002;j+=i)
            {
                arr[j]=false;
            }
        }
    }
}
ll MOD=998244353;
 int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,t;
    cin>>s>>t;
    ll ans=0;
    int n=s.length();
    int m=t.length();
    ll dp[s.length()+1][s.length()+1];
    memset(dp,0,sizeof dp);
    for(int i=0;i<n;i++)
    {
      if(i>=t.length()||s[0]==t[i])
      {
        dp[0][i]=2;
      }
    }
    for(int i=1;i<s.length();i++)
    {
      for(int j=1;i+j-1<s.length();j++)
      {
        if(j-1>=t.length()||s[i]==t[j-1])
        {
          dp[i][j-1]=(dp[i][j-1]%MOD+dp[i-1][j]%MOD)%MOD;
        }
      }
      for(int j=0;i+j<n;j++)
      {
        if(i+j>=m||s[i]==t[i+j])
        {
          dp[i][j]=(dp[i][j]%MOD+dp[i-1][j]%MOD)%MOD;
        }
      }
    }
    for(int i=t.length()-1;i<s.length();i++)
    {
      ans=(ans%MOD+dp[i][0]%MOD)%MOD;
    }
    cout<<ans<<"\n";
}