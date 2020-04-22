#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
void dfs(int s,int visit[],vector<int> &ans,vector<int> v[])
{
    ans.push_back(s);
    // cout<<s<<"\n";
    for(int i=0;i<v[s].size();i++)
    {
        // cout<<v[s][i]<<" ";
        if(visit[v[s][i]]==0)
        {
            visit[v[s][i]]=1;
            dfs(v[s][i],visit,ans,v);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v[n+1];
    map<pair<int,int>,int> ma;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        if(ma.find(make_pair(min(a,b),max(a,b)))==ma.end())
        {
            ma[make_pair(min(a,b),max(a,b))]=1;
            v[a].push_back(b);
            v[b].push_back(a);
        }
    }
    priority_queue<int,vector<int>,greater<int> > q;
    vector<int> ans;
    int visit[n+1];
    fill(visit,visit+n+1,0);
    // visit[1]=1;
    q.push(1);
    while(!q.empty())
    {
        int x=q.top();
        q.pop();
        if(visit[x]==0)
        {
            visit[x]=1;
            ans.push_back(x);
            for(int i=0;i<v[x].size();i++)
            {
                q.push(v[x][i]);
            }
        }
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}