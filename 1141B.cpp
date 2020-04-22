#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(b.second!=a.second)
        return a.second<b.second;
    return a.first<b.first;
}
int ans,n;
int xa[]={1,0,-1,0};
int ya[]={0,1,0,-1};
int main()
{
    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i+n]=arr[i];
    }
    int ans=0,cur=0;
    for(int i=0;i<2*n;i++)
    {
        if(arr[i]==0)
        {
            cur=0;
        }
        else
        {
            cur++;
        }
        ans=max(ans,cur);
    }
    cout<<ans<<"\n";
}