#include <bits/stdc++.h>
#include <vector>
using namespace std;
 int main()
{
    int n,b;
    cin>>n>>b;
    pair<int,int> p[n];
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(arr[0]%2==0)
    {
        p[0].first=1;
        p[0].second=0;
    }
    else
    {
        p[0].first=0;
        p[0].second=1;
    }
    vector<int> v;
    for(int i=1;i<n;i++)
    {
        p[i].first=p[i-1].first;
        p[i].second=p[i-1].second;
        if(arr[i]%2==0)
        {
            p[i].first++;
        }
        else
        {
            p[i].second++;
        }
        //cout<<i<<" "<<p[i].first<<" "<<p[i].second<<"\n";
        if(p[i].first==p[i].second&&i!=n-1)
        {
            v.push_back(abs(arr[i]-arr[i+1]));
            //cout<<i<<" ";
        }
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<v.size();i++)
    {
        if(b-v[i]>=0)
        {
            ans++;
            b=b-v[i];
        }
        else
        {
            break;
        }
    }
    cout<<ans;
}