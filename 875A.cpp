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
    ll n;
    cin>>n;
    vector<int> sol;
    for(int i=1;i<=min(ll(90),n);i++)
    {
        ll x=n-i;
        string s=to_string(x);
        int sum=0;
        for(int j=0;j<s.length();j++)
            sum+=(s[j]-'0');
        if(x+sum==n)
            sol.push_back(x);
    }
    cout<<sol.size()<<"\n";
    sort(sol.begin(),sol.end());
    for(int i=0;i<sol.size();i++)
        cout<<sol[i]<<"\n";
}