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
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    a--;
    b--;
    if(s[a]==s[b])
    {
        cout<<0<<"\n";
    }
    else
    {
        cout<<1<<"\n";
    }
}