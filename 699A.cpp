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
    ll ans=1000000000000;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]=='R'&&s[i+1]=='L')
        {
            ans=min(ans,(arr[i+1]-arr[i])/2);
        }
    }
    if(ans==1000000000000)
        cout<<-1<<"\n";
    else
        cout<<ans<<"\n";
}