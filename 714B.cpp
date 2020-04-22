#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
  int main()
{
    int n;
    cin>>n;
    set<ll> s;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        s.insert(x);
    }
    ll arr[1000000];
    int i=0;
    for(set<ll>::iterator it=s.begin();it!=s.end();it++)
    {
        arr[i++]=*it;
    }
    if((s.size()==3&&(arr[2]-arr[1]==arr[1]-arr[0]))||(s.size()<=2))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}