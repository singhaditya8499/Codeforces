#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool isprime(int x)
{
    if(x==2)
        return true;
    if(x<3)
        return false;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    if(n<=2)
        cout<<0<<"\n";
    else
    {
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=arr[0]&&arr[i]!=arr[n-1])
                ans++;
        }
        cout<<ans<<"\n";
    }
}