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
    ll n,m;
    cin>>n>>m;
    int ans=0;
    if(m%n!=0)
    {
        cout<<-1<<"\n";
        return 0;
    }
    n=m/n;
    int i,j;
    for(i=0;i<=25;i++)
    {
        for(j=0;j<=20;j++)
        {
            ll tmp=pow(2,i)*pow(3,j);
            if(tmp==n)
            {
                ans=1;
                break;
            }
        }
        if(ans)
            break;
    }
    if(ans)
    {
        cout<<i+j<<"\n";
    }
    else
        cout<<-1<<"\n";
}