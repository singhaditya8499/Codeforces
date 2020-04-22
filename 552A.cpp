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
    int arr[101][101];
    memset(arr,0,sizeof arr);
    int n;
    cin>>n;
    while(n--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        for(int i=x1;i<=x2;i++)
        {
            for(int j=y1;j<=y2;j++)
                arr[i][j]+=1;
        }
    }
    int ans=0;
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
            ans=ans+arr[i][j];
    }
    cout<<ans<<"\n";
}