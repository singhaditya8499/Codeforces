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
    int arr[2*n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[n+i]=arr[i];
    }
    int s,t;
    cin>>s>>t;
    int source=min(s,t);
    int destin=max(s,t);
    source--;
    destin--;
    int ans=10000000,cur=0;
    for(int i=source;i<destin;i++)
    {
        cur+=arr[i];
    }
    ans=min(ans,cur);
    cur=0;
    for(int i=destin;i<source+n;i++)
        cur+=arr[i];
    ans=min(ans,cur);
    cout<<ans<<"\n";
}