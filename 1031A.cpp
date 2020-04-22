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
    int w,h,k;
    cin>>w>>h>>k;
    int ans=0;
    for(int i=0;i<k;i++)
    {
        ans=ans+(w*h-(w-2)*(h-2));
        w=w-4;
        h=h-4;
    }
    cout<<ans<<"\n";
}