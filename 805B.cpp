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
    int x=n/4;
    n=n%4;
    string ans;
    for(int i=0;i<x;i++)
    {
        ans=ans+"aabb";
    }
    if(n==1)
        ans=ans+'a';
    if(n==2)
        ans=ans+"aa";
    if(n==3)
        ans=ans+"aab";
    cout<<ans<<"\n";
}