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
    cin>>a;
    string b="CODEFORCES";
    int i=0,j=0;
    while(i<a.length()&&i<10)
    {
        if(b[i]==a[i])
        {
            i++;
        }
        else
            break;
    }
    while(j<a.length()&&j<10)
    {
        if(a[a.length()-1-j]==b[10-1-j])
        {
            j++;
        }
        else
            break;
    }
    if(i+j>=10)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}