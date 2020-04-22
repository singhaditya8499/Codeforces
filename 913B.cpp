#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(ll a,ll b)
{
    return a>b;
}
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    arr[1]=0;
    vector<int> v[n+1];
    for(int i=2;i<=n;i++)
    {
        int x;
        cin>>x;
        v[x].push_back(i);
    }
    int yes=1;
    for(int i=1;i<=n;i++)
    {
        if(!v[i].size())
            continue;
        int cnt=0;
        for(int j=0;j<v[i].size();j++)
        {
            if(!v[v[i][j]].size())
                cnt++;
        }
        if(cnt<3)
        {
            yes=0;
            break;
        }
    }
    if(yes)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}