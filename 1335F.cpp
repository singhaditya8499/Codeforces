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
vector<int> v[1000000+1];
vector<int> black(1000000+1);
vector<int> rev[1000000+1];
vector<int> visit(1000000+1);
vector<int> cycle,black_comp,comp;
vector<int> fs(1000000+1);
int cycle_len;
  void dfs(int x)
{
  comp.push_back(x);
  visit[x]=1;
  for(auto i:v[x])
  {
    if(!visit[i])
    dfs(i);
  }
  for(auto i:rev[x])
  {
    if(!visit[i])
    dfs(i);
  }
}
 int ddfs(int x,int cnt)
{
  visit[x]=1;
  fs[x]=cnt;
  for(auto i:v[x])
  {
    if(visit[i])
    {
      cycle_len=cnt-fs[i]+1;
      return i;
    }
    return ddfs(i,cnt+1);
  }
}
 void fcyc(int x,int cnt)
{
  visit[x]=1;
  cycle.push_back(x);
  fs[x]=cnt;
  for(auto i:v[x])
  {
    if(!visit[i])
    {
      fcyc(i,(cnt-1+cycle_len)%cycle_len);
    }
    else
    {
      return;
    }
      }
}
 void dffs(int x,int cnt)
{
  if(black[x])
  black_comp.push_back(cnt);
  visit[x]=1;
  for(auto i:rev[x])
  {
    if(!visit[i])
    dffs(i,(cnt+1)%cycle_len);
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
      int n,m;
      cin>>n>>m;
      for(int i=0;i<n*m;i++)
      {
        v[i].clear();
        rev[i].clear();
        black[i]=0;
        visit[i]=0;
        fs[i]=0;
      }
      for(int i=0;i<n;i++)
      {
        string s;
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
          black[i*m+j]=(s[j]=='0'?1:0);
        }
      }
      for(int i=0;i<n;i++)
      {
        string s;
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
          if(s[j]=='U')
          {
            v[i*m+j].push_back((i-1)*m+j);
            rev[(i-1)*m+j].push_back(i*m+j);
          }
          if(s[j]=='L')
          {
            v[i*m+j].push_back(i*m+j-1);
            rev[i*m+j-1].push_back(i*m+j);
          }
          if(s[j]=='R')
          {
            v[i*m+j].push_back(i*m+j+1);
            rev[i*m+j+1].push_back(i*m+j);
          }
          if(s[j]=='D')
          {
            v[i*m+j].push_back((i+1)*m+j);
            rev[(i+1)*m+j].push_back(i*m+j);
          }
        }
      }
      int ans=0,black_ans=0;
      for(int i=0;i<n*m;i++)
      {
        if(!visit[i])
        {
          cycle.clear();
          // cycle_len=0;
          black_comp.clear();
          comp.clear();
          dfs(i);
          for(auto x:comp) visit[x]=0;
          int root=ddfs(i,0);
          for(auto x:comp) visit[x]=0;
          fcyc(root,0);
          for(auto x:comp) visit[x]=0;
          for(auto x:cycle) dffs(x,fs[x]);
           sort(black_comp.begin(),black_comp.end());
          black_comp.resize(unique(black_comp.begin(),black_comp.end())-black_comp.begin());
          ans+=cycle.size();
          black_ans+=black_comp.size();
          for(auto x:comp) visit[x]=1;
        }
      }
      cout<<ans<<" "<<black_ans<<"\n";
    }
}