#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
bool cmp(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b)
{
    double aa,bb;
    if(a.first==1)
    {
        aa=double(a.second.first);
    }
    else
    {
        aa=double(a.second.first)/2.0;
    }
    if(b.first==1)
    {
        bb=double(b.second.first);
    }
    else
    {
        bb=double(b.second.first)/2.0;
    }
    if(aa==bb)
    {
        return a.first==1;
    }
    return aa>bb;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,vol;
    cin>>n>>vol;
    priority_queue<pair<int,int> > q[3];
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > anss[3];
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        q[x].push(make_pair(y,i+1));
    }
    ll ans=0;
    while(!q[1].empty()&&!q[2].empty()&&vol)
    {
        // cout<<q[1].top().first<<" "<<q[2].top().first<<"\n"
        if(vol==1)
        {
            ans+=q[1].top().first;
            anss[1].push(q[1].top());
            q[1].pop();
            vol--;
        }
        else
        {
            if(q[1].top().first>=q[2].top().first)
            {
                ans+=q[1].top().first;
                anss[1].push(q[1].top());
                q[1].pop();
                vol--;
            }
            else
            {
                pair<int,int> tmp=q[1].top();
                q[1].pop();
                if(!q[1].empty())
                {
                    if(tmp.first+q[1].top().first<q[2].top().first)
                    {
                        vol-=2;
                        anss[2].push(q[2].top());
                        ans+=q[2].top().first;
                        q[1].push(tmp);
                        q[2].pop();
                    }
                    else
                    {
                        vol-=2;
                        anss[1].push(tmp);
                        ans+=tmp.first+q[1].top().first;
                        anss[1].push(q[1].top());
                        q[1].pop();
                    }
                }
                else
                {
                    vol-=2;
                    q[1].push(tmp);
                    anss[2].push(q[2].top());
                    ans+=q[2].top().first;
                    q[2].pop();
                }
            }
        }
    }
    while(!q[1].empty()&&vol>=1)
    {
        vol--;
        anss[1].push(q[1].top());
        ans+=q[1].top().first;
        q[1].pop();
    }
    while(vol>=2&&!q[2].empty())
    {
        vol-=2;
        anss[2].push(q[2].top());
        ans+=q[2].top().first;
        q[2].pop();
    }
    while(anss[1].size()>=2&&q[2].size()>=1)
    {
        pair<int,int> tmp=anss[1].top();
        anss[1].pop();
        if(anss[1].top().first+tmp.first<q[2].top().first)
        {
            ans=ans-(anss[1].top().first+tmp.first)+q[2].top().first;
            anss[1].pop();
            anss[2].push(q[2].top());
            q[2].pop();
        }
        else
        {
            anss[1].push(tmp);
            break;
        }
    }
    cout<<ans<<"\n";
    while(!anss[1].empty())
    {
        cout<<anss[1].top().second<<" ";
        anss[1].pop();
    }
    while(!anss[2].empty())
    {
        cout<<anss[2].top().second<<" ";
        anss[2].pop();
    }
    cout<<endl;
    return 0;
}