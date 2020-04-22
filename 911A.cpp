#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n;
    cin>>n;
    ll arr[n];
    ll mi=10000000000;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mi=min(mi,arr[i]);
    }
    int ind=-10000000;
    ll ans=1000000000000;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==mi)
        {
            ans=min(ans,ll(i-ind));
            ind=i;
        }
    }
    cout<<ans<<"\n";
}