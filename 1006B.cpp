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
    int n,k;
    cin>>n>>k;
    int arr[n],mark[n],brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mark[i]=0;
        brr[i]=arr[i];
    }
    int kk=k,i=1;
    sort(brr,brr+n);
    int ans=0;
    while(kk--)
    {
        ans=ans+brr[n-i];
        for(int j=0;j<n;j++)
        {
            if(mark[j]==0&&arr[j]==brr[n-i])
            {
                mark[j]=1;
                break;
            }
        }
        i++;
    }
    int cur=0,cnt=0;
    cout<<ans<<"\n";
    for(int i=0;i<n;i++)
    {
        if(mark[i]==1)
        {
            if(cnt==1)
            {
                cout<<cur<<" ";
                cur=1;
            }
            else
            {
                cur++;
                cnt++;
            }
        }
        else
            cur++;
        // cout<<cur<<"\n";
    }
    if(cur)
        cout<<cur;
    cout<<endl;
}