#include<bits/stdc++.h>
#include<unordered_set>
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<n;i++)
        cin>>arr[i];
    int a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=a;i<b;i++)
        ans+=arr[i];
    cout<<ans<<"\n";
}