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
    if(a.first!=b.first)
    return a.first<b.first;
     return a.second>=b.second;
}
 int main()
{
    string a;
    string b;
    cin>>a>>b;
    int ans=0,empty=0;
    for(int i=0;i<a.length();i++)
    {
        int tmp=(a[i]=='0')+(b[i]=='0');
        empty+=tmp;
        if(empty>=3)
        {
            empty-=3;
            ans++;
        }
        else
            empty=tmp;
    }
    cout<<ans<<"\n";
}