#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
void update(ll arr[],int pos,int val,int n)
{
    // cout<<pos<<" ";
    while(pos<=n)
    {
        arr[pos]+=val;
        pos=pos+(pos&-pos);
        // cout<<pos<<"\n";
    }
    // cout<<endl;
}
ll get(int pos,ll arr[])
{
    ll s=0;
    while(pos>0)
    {
        s+=arr[pos];
        pos=pos-(pos&-pos);
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    ll s[n+1];
    for(int i=1;i<=n;i++)
    cin>>s[i];
    ll arr[1000005];
    memset(arr,0,sizeof arr);
    for(int i=1;i<=n;i++)
    {
        update(arr,i,i,n);
    }
    // for(int i=1;i<=n;i++)
    // cout<<arr[i]<<" ";
    // cout<<endl;
    int ans[n+1];
    for(int i=n;i>=1;i--)
    {
        int low=1,high=n;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            ll sum=get(mid,arr);
            if(sum>s[i])
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        ans[i]=low;
        update(arr,low,-low,n);
    }
    for(int i=1;i<=n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}