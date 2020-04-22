#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
multiset<ll> row[1000008];
vector<pair<int,int> > add[1000008],rem[1000008];
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int cnt;
        cin>>cnt;
        for(int j=0;j<cnt;j++)
        {
            int x;
            cin>>x;
            add[j].push_back(make_pair(x,i));
            rem[j+1+m-cnt].push_back(make_pair(x,i));
        }
        if(cnt<m)
        {
            add[0].push_back(make_pair(0,i));
            rem[m-cnt].push_back(make_pair(0,i));
            add[cnt].push_back(make_pair(0,i));
            rem[m].push_back(make_pair(0,m));
        }
    }
    ll ans[m+10];
    memset(ans,0,sizeof ans);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<rem[i].size();j++)
        {
            pair<int,int> x=rem[i][j];
            ans[i]-=*row[x.second].rbegin();
            row[x.second].erase(row[x.second].find(x.first));
            ans[i]+=(row[x.second].empty())?0:*row[x.second].rbegin();
        }
        for(int j=0;j<add[i].size();j++)
        {
            pair<int,int> x=add[i][j];
            ans[i]-=(row[x.second].empty())?0:*row[x.second].rbegin();
            row[x.second].insert(x.first);
            ans[i]+=*row[x.second].rbegin();
        }
        ans[i+1]=ans[i];
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}