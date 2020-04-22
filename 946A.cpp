#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
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
    int arr[n];
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ans+=abs(arr[i]);
    }
    cout<<ans<<"\n";
}