#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(ll a,ll b)
{
    return a>b;
}
 int main()
{
    string s;
    cin>>s;
    int x=s[0]-'a'+1;
    int y=s[1]-'0';
    int ans=0;
    if(x+1<=8)
        ans++;
    if(x-1>=1)
        ans++;
    if(y-1>=1)
        ans++;
    if(y+1<=8)
        ans++;
    if(x+1<=8&&y+1<=8)
        ans++;
    if(x+1<=8&&y-1>=1)
        ans++;
    if(x-1>=1&&y-1>=1)
        ans++;
    if(x-1>=1&&y+1<=8)
        ans++;
    cout<<ans<<"\n";
}