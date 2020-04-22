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
 int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      if((n/2)%2==1)
      {
        cout<<"NO\n";
        continue;
      }
      cout<<"YES\n";
      for(int i=1;i<=n/2;i++)
      cout<<i*2<<" ";
      int sum=2+(n/2)*2;
      int start=1;
      int end=sum-start;
      int total=n/2;
      while(total)
      {
        cout<<start<<" "<<end<<" ";
        start+=2;
        end-=2;
        total-=2;
      }
      cout<<endl;
    }
}