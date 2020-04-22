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
    int t;
    cin>>t;
    map<ll,int> m;
    while(t--)
    {
        char c;
        cin>>c;
        string s;
        cin>>s;
        ll x=0;
        for(int i=0;i<s.length();i++)
        {
            x=x*2+(s[i]%2);
        }
        if(c=='+')
            m[x]++;
        else if(c=='-')
            m[x]--;
        else
            cout<<m[x]<<"\n";
    }
}