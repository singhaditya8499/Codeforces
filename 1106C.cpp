#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(b.second!=a.second)
        return a.second<b.second;
    return a.first<b.first;
}
int ans,n;
int xa[]={1,0,-1,0};
int ya[]={0,1,0,-1};
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll ans=0;
    sort(arr,arr+n);
    if(n%2==0)
    {
        int i=0,j=n-1;
        while(i<=j)
        {
            ans=ans+pow(arr[i]+arr[j],2);
            i++;
            j--;
        }
    }
    else
    {
        int i=0,j=n-1;
        while(i<=j)
        {
            if(i==j-2)
            {
                ans=ans+pow(arr[i]+arr[i+1]+arr[j],2);
                break;
            }
            ans=ans+pow(arr[i]+arr[j],2);
            i++;
            j--;
        }
    }
    cout<<ans<<"\n";
}