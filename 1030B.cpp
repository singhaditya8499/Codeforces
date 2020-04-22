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
    int n,d;
    cin>>n>>d;
    int q;
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        int a1,a2,a3,a4;
        a1=x-y+d;
        a2=x-y-d;
        a3=x+y-d;
        a4=x+y-2*n+d;
        if(a1>=0&&a2<=0&&a3>=0&&a4<=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}