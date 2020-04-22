#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(pair<char,int> a,pair<char,int> b)
{
    return a.second<b.second;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int cnt1=0,cnt2=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            if(m>0)
                m--;
            else
                ans++;
        }
        else
        {
            if(k>0)
            {
                k--;
            }
            else if(m>0)
            {
                m--;
            }
            else
                ans++;
        }
    }
    cout<<ans<<"\n";
}