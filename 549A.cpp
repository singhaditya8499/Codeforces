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
 bool cmp(pair<char,int> a,pair<char,int> b)
{
    return a.second<b.second;
}
int main()
{
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    int ans=0;
    for(int i=0;i<=n-2;i++)
    {
        for(int j=0;j<=m-2;j++)
        {
            string ss="";
            ss=ss+s[i][j];
            ss=ss+s[i][j+1];
            ss=ss+s[i+1][j];
            ss=ss+s[i+1][j+1];
            // cout<<ss<<"\n";
            // cout<<char(s[i][j])+s[i][j+1]+s[i+1][j]+s[i+1][j+1]<<"\n";
            sort(ss.begin(),ss.end());
            if(ss=="acef")
                ans++;
        }
    }
    cout<<ans<<"\n";
}