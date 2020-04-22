#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b)
{
    if(a.second.second!=b.second.second)
        return a.second.second<b.second.second;
    else
    {
        if(a.first!=b.first)
            return a.first<b.first;
        else
        {
            return a.second.first>b.second.first;
        }
    }
}
 int main()
{
    int n,k;
    cin>>n>>k;
    pair<int,pair<int,int> > arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i].first;
    for(int i=0;i<n;i++)
        cin>>arr[i].second.first;
    for(int i=0;i<n;i++)
        arr[i].second.second=arr[i].first-arr[i].second.first;
    sort(arr,arr+n,cmp);
    int ans=0;
    for(int i=0;i<k;i++)
    {
        ans=ans+arr[i].first;
    }
    for(int i=k;i<n;i++)
    {
        if(arr[i].second.second<0)
            ans=ans+arr[i].first;
        else
            ans+=arr[i].second.first;
    }
    cout<<ans<<"\n";
}