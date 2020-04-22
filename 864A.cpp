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
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        m[x]+=1;
    }
    vector<pair<int,int> > v;
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
    {
        v.push_back(make_pair(it->second,it->first));
    }
    sort(v.begin(),v.end());
    int found=-1;
    if(v.size()!=2)
    {
        cout<<"NO\n";
        return 0;
    }
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i].first==v[i+1].first)
        {
            found=i;
            break;
        }
    }
    if(found==-1)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        cout<<v[found].second<<" "<<v[found+1].second<<"\n";
    }
}