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
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int arr[n];
      int cnt[200][n];
      memset(cnt,0,sizeof cnt);
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
        cnt[arr[i]-1][i]=1;
      }
      for(int i=0;i<200;i++)
      {
        for(int j=1;j<n;j++)
        {
          cnt[i][j]+=cnt[i][j-1];
        }
      }
      vector<int> v[200];
      for(int i=0;i<n;i++)
      {
        v[arr[i]-1].push_back(i);
      }
      ll ans=0;
      for(int k=0;k<200;k++)
      {
        ans=max(ans,(ll)cnt[k][n-1]);
      }
      for(int i=0;i<200;i++)
      {
        for(int j=0;j<v[i].size()/2;j++)
        {
          int left=v[i][j]+1;
          int right=v[i][int(v[i].size())-j-1]-1;
          int maa=-1;
          for(int k=0;k<200;k++)
          {
            maa=max(maa,cnt[k][right]-cnt[k][left-1]);
          }
          ans=max(ans,ll(2*(j+1)+maa));
        }
      }
      cout<<ans<<"\n";
    }
}