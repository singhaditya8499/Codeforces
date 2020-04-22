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
    if(n==1)
        cout<<1<<"\n"<<1<<"\n";
    else if(n==2)
    {
        cout<<1<<"\n"<<1<<"\n";
    }
    else if(n==3)
    {
        cout<<2<<"\n";
        cout<<1<<" "<<3<<"\n";
    }
    else
    {
        cout<<n<<"\n";
        for(int i=2;i<=n;i+=2)
            cout<<i<<" ";
        for(int i=1;i<=n;i+=2)
            cout<<i<<" ";
        cout<<endl;
    }
}