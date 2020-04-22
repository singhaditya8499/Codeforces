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
// bool cmp(pair<int,int> a,pair<int,int> b)
// {
//   return a.first>b.first;
// }
struct cmp {
  bool operator()(pair<ll,ll> &p1, pair<ll,ll> &p2) 
  { 
      // return "true" if "p1" is ordered  
      // before "p2", for example:
      return (p1.first-p1.second)<(p2.first-p2.second);
      // return p1.height < p2.height; 
  }
};
int solve(ll cur,int pos,int parent,vector<int> v[],priority_queue<ll> &q,int &total)
{
  int x=0;
  for(int i=0;i<v[pos].size();i++)
  {
    if(v[pos][i]!=parent)
    {
      x+=solve(cur+1,v[pos][i],pos,v,q,total);
    }
  }
  // cout<<pos+1<<" "<<x<<" "<<cur<<"\n";
  q.push(cur-x);
  return 1+x;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> v[n];
    for(int i=0;i<n-1;i++)
    {
      int a,b;
      cin>>a>>b;
      a--;
      b--;
      v[a].push_back(b);
      v[b].push_back(a);
    }
    long long ans=0;
    priority_queue<ll> q;
    int total=0;
    for(int i=0;i<v[0].size();i++)
    {
      total+=solve(1,v[0][i],0,v,q,total);
    }
    total++;
    q.push(ll(-total));
    if(k==n)
    {
      cout<<0<<"\n";
      return 0;
    }
    while(k--)
    {
      ans=ans+q.top();
      // cout<<q.top()<<"\n";
      q.pop();
    }
    cout<<ans<<"\n";
    return 0;
}