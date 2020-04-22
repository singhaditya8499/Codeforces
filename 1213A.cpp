#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define pi 3.1415926535
#define mod 379                       //change when needed
 using namespace std;
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    ll ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        ll cur=0;
        for(int j=0;j<n;j++)
        {
            if(abs(arr[i]-arr[j])%2!=0)
            {
                cur++;
            }
        }
        ans=min(ans,cur);
    }
    cout<<ans<<"\n";
}