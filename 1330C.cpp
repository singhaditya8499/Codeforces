#include<bits/stdc++.h>
 // #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#include<unordered_map>
#include<unordered_set>
#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
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
bool cmp(pair<int,int> a,pair<int,int> b)
{
  return a.first>b.first;
}
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll arr[m+1];
    ll sum=0;
    for(ll i=1;i<=m;i++)
    {
      cin>>arr[i];
      sum+=arr[i];
    }
    if(sum<n)
    {
      cout<<-1<<endl;
      return 0;
    }
    ll suf[m+4];
    memset(suf,0,sizeof suf);
    for(ll i=m;i>=1;i--)
    {
      suf[i]=suf[i+1]+arr[i];
    }
    ll ans[m+4];
    for(ll i=1;i<=m;i++)
    {
      ll pos=max(i,n-suf[i]+1);
      if(i+arr[i]-1>n)
      {
        cout<<-1<<endl;
        return 0;
      }
      ans[i]=pos;
    }
    for(ll i=1;i<=m;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}