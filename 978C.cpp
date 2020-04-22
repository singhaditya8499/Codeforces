#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(pair<char,int> a,pair<char,int> b)
{
    return a.second<b.second;
}
int main()
{
    int n,m;
    cin>>n>>m;
    ll arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
        arr[i]+=arr[i-1];
    while(m--)
    {
        ll x;
        cin>>x;
        ll pos=lower_bound(arr+1,arr+n+1,x)-(arr);
        if(x==arr[pos])
        {
            cout<<pos<<" "<<x-arr[pos-1]<<"\n";
        }
        else
        {
            cout<<pos<<" "<<x-arr[pos-1]<<"\n";
        }
    }
}