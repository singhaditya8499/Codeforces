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
bool check(int n,int arr[])
{
  int x=0;
  int used[n+1];
  memset(used,0,sizeof used);
  for(int i=1;i<=n;i++)
  {
    x=x^i;
    x=x^arr[i];
    if(arr[i]>n)
    return false;
    used[arr[i]]++;
  }
  int possible=1;
  for(int i=1;i<=n;i++)
  {
    if(used[i]!=1)
    {
      possible=0;
      break;
    }
  }
  if(possible&&x==0)
  return true;
   return false;
}
bool checkrev(int n,int a,int arr[])
{
  int x=0;
  int used[n-a+1];
  memset(used,0,sizeof used);
  for(int i=n;i>a;i--)
  {
    x=x^(n-i+1);
    x=x^arr[i];
    if(arr[i]>(n-a))
    return false;
    used[arr[i]]++;
  }
  int possible=1;
  for(int i=1;i<=n-a;i++)
  {
    if(used[i]!=1)
    {
      possible=0;
      break;
    }
  }
  if(possible&&x==0)
  return true;
   return false;
}
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int arr[n+1];
      int ma=0;
      for(int i=1;i<=n;i++)
      {
        cin>>arr[i];
        ma=max(ma,arr[i]);
      }
      int ans=0;
      vector<pair<int,int> > v;
      if(check(ma,arr)&&checkrev(n,ma,arr))
      {
        ans++;
        v.push_back(make_pair(ma,n-ma));
      }
      if(check(n-ma,arr)&&checkrev(n,n-ma,arr)&&ma!=(n-ma))
      {
        ans++;
        v.push_back(make_pair(n-ma,ma));
      }
      cout<<ans<<"\n";
      for(int i=0;i<ans;i++)
      cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}