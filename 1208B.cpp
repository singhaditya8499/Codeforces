#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int ans=n-1;
    ll arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        map<int,int> m;
        int k=0;
        for(k=0;k<i;k++)
        {
            if(m.find(arr[k])!=m.end()&&m[arr[k]]==1)
            {
                break;
            }
            else
            m[arr[k]]++;
        }
        int j=n-1;
        for(j=n-1;j>=0;j--)
        {
            if(m.find(arr[j])!=m.end()&&m[arr[j]]==1)
            {
                break;
            }
            else
            {
                m[arr[j]]++;
            }
        }
        // cout<<k<<" "<<j<<"\n";
        ans=min(ans,j+1-k);
    }
    cout<<ans<<"\n";
}