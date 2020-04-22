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
    int n;
    cin>>n;
    int x;
    int cntr=0,cntl=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>0)
            cntr++;
        else
            cntl++;
        cin>>x;
    }
    if(cntl<=1||cntr<=1)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}