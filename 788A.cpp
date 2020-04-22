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
    int n;
    cin>>n;
    ll arr[n];
    for(int i(0);i<n;i++)
        cin>>arr[i];
    ll ans[n-1];
    for(int i=0;i<n-1;i++)
    {
        ans[i]=abs(arr[i]-arr[i+1]);
    }
    ll anss=-1000000000,cur=0;
    for(int i=0;i<n-1;i++)
    {
        if(i%2==0)
            cur+=ans[i];
        else
            cur+=(-ans[i]);
        anss=max(anss,cur);
        // cout<<anss<<" "<<i<<"\n";
        if(cur<0)
            cur=0;
    }
    cur=0;
    for(int i=0;i<n-1;i++)
    {
        if(i%2==1)
            cur+=ans[i];
        else
            cur+=(-ans[i]);
        anss=max(anss,cur);
        if(cur<0)
            cur=0;
    }
    cout<<anss<<"\n";
}