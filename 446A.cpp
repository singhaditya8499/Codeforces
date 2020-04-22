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
    int lenb[n],lenf[n];
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            lenf[i]=0;
            break;
        }
        if(i-1>=0&&lenf[i-1]>1)
        {
            lenf[i]=lenf[i-1]-1;
        }
        else
        {
            int front=1;
            int j=i+1;
            while(j+1<n&&arr[j]<arr[j+1])
            {
                front++;
                j++;
            }
            lenf[i]=front;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(i==0)
        {
            lenb[i]=0;
            break;
        }
        if(i+1<n&&lenb[i+1]>1)
        {
            lenb[i]=lenb[i+1]-1;
        }
        else
        {
            int back=1;
            int j=i-1;
            while(j-1>=0&&arr[j]>arr[j-1])
            {
                back++;
                j--;
            }
            lenb[i]=back;
        }
    }
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            ans=max(ans,lenf[i]+1);
        }
        else if(i==n-1)
        {
            ans=max(ans,lenb[i]+1);
        }
        else
        {
            if(arr[i+1]-arr[i-1]>=2)
            {
                ans=max(ans,lenf[i]+lenb[i]+1);
            }
            ans=max(ans,lenf[i]+1);
            ans=max(ans,lenb[i]+1);
        }
    }
    // for(int i=0;i<n;i++)
    //     cout<<lenf[i]<<" "<<lenb[i]<<"\n";
    cout<<ans<<"\n";
}