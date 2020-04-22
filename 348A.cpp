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
    ll sum=0,ma=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        ma=max(ma,arr[i]);
    }
    ll x=ceil(sum/((n-1)*1.0));
    cout<<max(ma,x)<<"\n";
}