#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
void generate(vector<ll> &v,ll &x)
{
    if(x>=10000000000)
        return;
    v.push_back(x);
    ll y=x*10+4;
    generate(v,y);
    y=x*10+7;
    generate(v,y);
}
int main()
{
    int n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    if(k==0)
    {
        if(arr[0]==1)
        {
            cout<<-1<<"\n";
        }
        else
            cout<<1<<"\n";
        return 0;
    }
    if(k>n)
        cout<<-1<<"\n";
    else if(k==n)
    {
        cout<<1000000000<<"\n";
    }
    else
    {
        if(arr[k-1]==arr[k])
        {
            cout<<-1<<"\n";
        }
        else
            cout<<arr[k-1]<<"\n";
    }
}