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
    int n,k,arr[500];
    cin>>n>>k;
    int p = 0,s = 0;
    for(int i = 1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]==-1)s++;
        else p++;
    }
    int ans = 0;
    for(int i = 1;i<=n;i++)
    {
        int cnt = 0,pnt = 0;
        for(int j = i;j>=1;j-=k)
        {
            if(arr[j]==-1)pnt++;
            else cnt++;
        }
        for(int j = i+k;j<=n;j+=k)
        {
            if(arr[j]==-1)pnt++;
            else cnt++;
        }
         ans = max(ans,abs((s-pnt)-(p-cnt)));
    }
    cout<<ans;
}