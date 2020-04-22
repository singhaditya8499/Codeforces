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
  int main()
{
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    string s[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>s[i][0];
        s[i][1]=s[i][0];
        reverse(s[i][1].begin(),s[i][1].end());
    }
    ll ans[n][2];
    ans[0][0]=0;
    ans[0][1]=arr[0];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            ans[i][j]=100000000000000000;
            for(int k=0;k<2;k++)
            {
                if(s[i][j]>=s[i-1][k])
                    ans[i][j]=min(ans[i][j],ans[i-1][k]+arr[i]*j);
            }
        }
    }
    if(min(ans[n-1][0],ans[n-1][1])>=100000000000000000)
        cout<<-1<<"\n";
    else
        cout<<min(ans[n-1][0],ans[n-1][1])<<"\n";
}