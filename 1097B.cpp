#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(ll a,ll b)
{
    return a>b;
}
int ans,n;
void solve(int arr[],int cur,int ind)
{
    if(ind==n&&cur%360==0)
    {
        ans=1;
        return;
    }
    if(ind==n)
        return;
    solve(arr,cur+arr[ind],ind+1);
    if(ans)
        return;
    solve(arr,cur-arr[ind],ind+1);
    if(ans)
        return;
}
int main()
{
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    ans=0;
    solve(arr,0,0);
    if(ans)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}