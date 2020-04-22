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
bool cmp(pair<ll,int> a,pair<ll,int> b)
{
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    pair<ll,int> arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first;
        arr[i].second=i;
    }
    sort(arr,arr+n);
    ll cur=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i].first<cur)
        {
            arr[i].first=cur;
            cur++;
        }
        else
        {
            if(arr[i].first==cur)
            {
                arr[i].first=cur;
                cur++;
            }
            else
            {
                cur=arr[i].first+1;
            }
        }
    }
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++)
        cout<<arr[i].first<<" ";
    cout<<endl;
}