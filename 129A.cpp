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
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x%2)
            odd++;
        else
            even++;
    }
    int ans=0;
    if(odd%2==1)
    {
        ans=ans+odd;
    }
    else
    {
        ans=ans+even;
    }
    cout<<ans<<"\n";
}