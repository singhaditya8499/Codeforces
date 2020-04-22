#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp()
{
    //
}
 int main()
{
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    ll ans=0,cur=0,prev=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=prev*2)
        {
            cur++;
            prev=arr[i];
        }
        else
        {
            prev=arr[i];
            cur=1;
        }
        ans=max(ans,cur);
    }
    cout<<ans<<"\n";
}