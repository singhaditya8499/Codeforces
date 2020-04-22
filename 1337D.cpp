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
ll sol(ll a,ll b,ll c)
{
  return (a-b)*(a-b)+(b-c)*(b-c)+(c-a)*(c-a);
}
void solve(vector<ll> a,vector<ll> b,vector<ll> c,long long &ans)
{
  for(auto i:a)
  {
    auto x=lower_bound(b.begin(),b.end(),i);
    auto y=upper_bound(c.begin(),c.end(),i);
    if(x==b.end()||y==c.begin())
    continue;
    y--;
    ans=min(ans,sol(i,*x,*y));
  }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      int a,b,c;
      cin>>a>>b>>c;
      vector<ll> arr1(a),arr2(b),arr3(c);
      for(int i=0;i<a;i++)
      cin>>arr1[i];
      for(int i=0;i<b;i++)
      cin>>arr2[i];
      for(int i=0;i<c;i++)
      cin>>arr3[i];
      sort(arr1.begin(),arr1.end());
      sort(arr2.begin(),arr2.end());
      sort(arr3.begin(),arr3.end());
      long long ans=9e18;
      solve(arr1,arr2,arr3,ans);
      solve(arr1,arr3,arr2,ans);
      solve(arr2,arr1,arr3,ans);
      solve(arr2,arr3,arr1,ans);
      solve(arr3,arr1,arr2,ans);
      solve(arr3,arr2,arr1,ans);
      cout<<ans<<"\n";
    }
}