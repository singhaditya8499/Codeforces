#include<bits/stdc++.h>
#include<unordered_map>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
         sort(arr,arr+n);
        ll x=k+arr[0];
        if(n==1)
        {
            cout<<x<<"\n";
            continue;
        }
        if(abs(x-arr[n-1])>k)
        cout<<-1<<"\n";
        else
        cout<<x<<"\n";
    }
}