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
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> v;
    int start=0,cur=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cur++;
        }
        else
        {
            if(arr[i]==1&&start)
            {
                v.push_back(cur);
                cur=0;
            }
            else if(arr[i]==1)
            {
                cur=0;
                start=1;
            }
        }
    }
    ll ans=1;
    if(start==0)
        ans=0;
    for(int i=0;i<v.size();i++)
        ans=ans*(v[i]+1);
    cout<<ans<<"\n";
}