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
    int arr[n];
    ll ans=0;
    int height=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ans=ans+abs(height-arr[i])+2;
        height=arr[i];
    }
    cout<<ans-1<<"\n";
}