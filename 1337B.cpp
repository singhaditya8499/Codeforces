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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      int x,n,m;
      cin>>x>>n>>m;
      int poss=0;
      while(n||m)
      {
                if(x>=21)
        {
          if(n)
          {
            n--;
            x=int(x/2)+10;
          }
          else
          {
            m--;
            x=x-10;
          }
        }
        else
        {
          if(m)
          {
            m--;
            x=x-10;
          }
          else
          {
            n--;
            x=int(x/2)+10;
          }
                  }
                // cout<<x<<" "<<n<<" "<<m<<"\n";
        if(x<=0)
        {
          poss=1;
          break;
        }
      }
      if(poss)
      cout<<"YES\n";
      else
      cout<<"NO\n";
    }
    return 0;
}