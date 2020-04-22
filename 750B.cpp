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
    int cury=0,curx=0;
    int ans=1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        string s;
        cin>>s;
        if(s=="South")
            cury+=x;
        if(s=="North")
            cury-=x;
        if(s=="East")
            curx+=x;
        if(s=="West")
            curx+=x;
        if(s=="East"||s=="West")
        {
            if(cury==0||cury==20000)
                ans=0;
        }
        if(cury<0||cury>20000)
        {
            ans=0;
        }
    }
    if(cury!=0)
        ans=0;
    if(ans)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}