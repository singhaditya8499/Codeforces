#include<bits/stdc++.h>
typedef long long ll;
#define pi 3.1415926535
#define mod 100000000                       //change when needed
 using namespace std;
 int solve(int arr[],int n)
{
    int ans=0;
    for(int j=1;j<n;j++)
    {
        int left=0,right=0;
        for(int i=j-1;i>=0;i--)
        {
            left=left^arr[i];
            right=0;
            for(int k=j;k<n;k++)
            {
                right=right^arr[k];
                if(left==right)
                {
                    cout<<i<<" "<<j<<" "<<k<<"\n";
                    ans++;
                }
            }
        }
    }
    return ans;
}
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a[6]={4,8,15,16,23,42};
    map<int,int> m;
    m[4]=0;
    m[8]=1;
    m[15]=2;
    m[16]=3;
    m[23]=4;
    m[42]=5;
    int cnt[6];
    memset(cnt,0,sizeof cnt);
    for(int i=0;i<n;i++)
    {
        if(m.find(arr[i])==m.end())
        continue;
        int pos=m[arr[i]];
        int mi=INT_MAX;
        cnt[m[arr[i]]]++;
        for(int j=0;j<=pos;j++)
        {
            mi=min(mi,cnt[j]);
        }
        cnt[pos]=mi;
    }
    cout<<n-6*cnt[5]<<"\n";
}