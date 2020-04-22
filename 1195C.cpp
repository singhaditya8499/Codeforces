#include<bits/stdc++.h>
typedef long long ll;
#define pi 3.1415926535
#define mod 100000000                       //change when needed
 using namespace std;
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     int n;
    cin>>n;
    long long arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    long long ans[n+1][2];
    memset(ans,0,sizeof ans);
    for(int i=1;i<=n;i++)
    {
        ans[i][0]=max(ans[i-1][0],arr[i-1]+ans[i-1][1]);
        ans[i][1]=max(ans[i-1][1],arr1[i-1]+ans[i-1][0]);
    }
    cout<<max(ans[n][0],ans[n][1])<<"\n";
}