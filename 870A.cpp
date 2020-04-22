#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
 ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
 bool isprime(ll x)
{
    if(x==1)
        return false;
    if(x==2)
        return true;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[10];
    for(int i=0;i<10;i++)
        arr[i]=100;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(arr[x]==100)
            arr[x]=1;
        else
            arr[x]+=1;
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        if(arr[x]==100)
            arr[x]=-1;
        else
        arr[x]=arr[x]-1;
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<"\n";
            return 0;
        }
    }
    int first=-1,second=-1;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==1)
        {
            first=i;
            break;
        }
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]==-1)
        {
            second=i;
            break;
        }
    }
    // cout<<first<<" "<<second<<"\n";
    cout<<min(first+second*10,second+first*10)<<"\n";
}