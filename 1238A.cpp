#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
 void dfs(int x,int visit[],vector<int> v[])
{
    for(int i=0;i<v[x].size();i++)
    {
        if(visit[v[x][i]]==0)
        {
            visit[v[x][i]]=1;
            dfs(v[x][i],visit,v);
        }
    }
}
int x=20;
void test()
{
    int x=10;
    {
        int x=11;
        cout<<::x<<"\n";
    }
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(x-y==1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0; 
} 