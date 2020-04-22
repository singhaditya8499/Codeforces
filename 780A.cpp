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
    set<int> s;
    int ans=0;
    for(int i=0;i<2*n;i++)
    {
        int x;
        cin>>x;
        if(s.find(x)==s.end())
        {
            s.insert(x);
        }
        else
        {
            s.erase(x);
        }
        int ss=s.size();
        ans=max(ans,ss);
    }
    cout<<ans<<"\n";
}