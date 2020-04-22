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
    ll n;
    cin>>n;
    int x=n%10;
    if(x<=5)
        n=n-x;
    else
        n=n+(10-x);
    cout<<n<<"\n";
}