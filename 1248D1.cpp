#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
template <typename T>
T InvMod(T a,T b,T &x,T &y)
{
    if(a==0)
    {
        x=0;
        y=1;
        return b;
    }
    T x1,y1;
    T g=InvMod(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return g;
}
ll fact(ll n)
{
    if(n==1)
    return 1;
    return (n%mod*fact(n-1)%mod)%mod;
}
bool check(ll sum,ll a,ll b)
{
    while(sum)
    {
        if(sum%10!=a&&sum%10!=b)
        return false;
        sum=sum/10;
    }
    return true;
}
int main() 
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[n];
    int lans=1,rans=1;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            string tmp=s;
            char x=tmp[i];
            tmp[i]=tmp[j];
            tmp[j]=x;
            int mi=INT_MAX;
            memset(arr,0,sizeof arr);
            int open=0,close=0;
            if(tmp[0]=='(')
            {
                arr[0]=1;
                open++;
            }
            else
            {
                arr[0]=-1;
                close++;
            }
            for(int k=1;k<n;k++)
            {
                if(tmp[k]=='(')
                {
                    arr[k]=arr[k-1]+1;
                    open++;
                }
                else
                {
                    arr[k]=arr[k-1]-1;
                    close++;
                }
            }
            int cnt=0;
            for(int k=0;k<n;k++)
            {
                mi=min(mi,arr[k]);
            }
            for(int k=0;k<n;k++)
            {
                if(mi==arr[k])
                cnt++;
            }
            if(open!=close)
            {
                continue;
            }
            if(cnt>ans)
            {
                lans=i+1;
                rans=j+1;
                ans=cnt;
            }
        }
    }
    cout<<ans<<"\n";
    cout<<lans<<" "<<rans<<"\n";
    return 0; 
} 