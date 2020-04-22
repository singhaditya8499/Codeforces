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
      int n;
      cin>>n;
      int mat[26][n+2],x;
      memset(mat,0,sizeof mat);
      for(int i=0;i<n;i++)
      {
        cin>>x;
        x--;
        mat[x][i+1]=1;
      }
      for(int i=1;i<=n;i++)
      {
        for(int j=0;j<26;j++)
        {
          mat[j][i]=mat[j][i-1]+mat[j][i];
        }
      }
      int ans=-1;
      for(int i=1;i<=n;i++)
      {
        for(int j=i;j<=n;j++)
        {
          int left=0,cen=0;
          for(int k=0;k<26;k++)
          {
            {
              left=max(left,min(mat[k][i-1],mat[k][n]-mat[k][j]));
              cen=max(cen,mat[k][j]-mat[k][i-1]);
            }
          }
          // cout<<i<<" "<<j<<" "<<cen<<" "<<left<<"\n";
          ans=max(ans,left*2+cen);
        }
      }
      cout<<ans<<"\n";
    }
    return 0;
}