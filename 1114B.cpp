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
struct cmp
{
    bool operator ()(pair<int,int> &a,pair<int,int> &b)
    {
        return a.first<b.first;
    }
};
bool cmp1(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    priority_queue<pair<int,int>, vector<pair<int,int> >, cmp> q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        q.push(make_pair(arr[i],i+1));
    }
    vector<pair<int,int> > v;
    ll sum=0;
    for(int i=0;i<m*k;i++)
    {
        v.push_back(q.top());
        sum+=q.top().first;
        q.pop();
    }
    sort(v.begin(),v.end(),cmp1);
    cout<<sum<<"\n";
    for(int i=m-1;i<m*k-1;i+=m)
    {
        cout<<v[i].second<<" ";
    }
    cout<<endl;
}