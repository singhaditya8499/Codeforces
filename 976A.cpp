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
    string s;
    cin>>s;
    int cnt0=0,cnt1=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
            cnt0++;
        else
            cnt1++;
    }
    if(cnt1==0)
    {
        cout<<"0\n";
    }
    else
    {
        cout<<"1";
        for(int i=0;i<cnt0;i++)
            cout<<"0";
        cout<<endl;
    }
}