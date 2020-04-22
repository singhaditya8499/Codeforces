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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    for(int i=0;i<m;i++)
    {
        int l,r;
        char c1,c2;
        cin>>l>>r>>c1>>c2;
        l--;
        r--;
        for(int j=l;j<=r;j++)
        {
            if(s[j]==c1)
                s[j]=c2;
        }
    }
    cout<<s<<"\n";
}