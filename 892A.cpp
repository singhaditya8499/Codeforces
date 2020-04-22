#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(ll a,ll b)
{
    return a>b;
}
 int main()
{
    int n;
    cin>>n;
    ll total=0,arr[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        total+=x;
    }
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    if((arr[n-1]+arr[n-2])>=total)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}