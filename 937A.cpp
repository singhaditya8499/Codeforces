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
    int ans=0;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==0)
            continue;
        if(s.find(x)==s.end())
        {
            ans++;
            s.insert(x);
        }
    }
    cout<<ans<<"\n";
}