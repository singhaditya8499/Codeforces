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
    int s;
    cin>>s;
    int sum=(n*(n+1))/2;
    s=s%sum;
    for(int i=1;i<=n;i++)
    {
        if(s>=i)
            s-=i;
        else
            break;
    }
    cout<<s<<"\n";
}