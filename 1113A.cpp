#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b)
{
    if(a.second.second!=b.second.second)
        return a.second.second<b.second.second;
    else
    {
        if(a.first!=b.first)
            return a.first<b.first;
        else
        {
            return a.second.first>b.second.first;
        }
    }
}
 int main()
{
    int n,v;
    cin>>n>>v;
    if(1+v>=n)
    {
        cout<<n-1<<"\n";
        return 0;
    }
    int total=0;
    n=n-v;
    total=(n*(n+1))/2;
    total--;
    total+=v;
    cout<<total<<"\n";
}