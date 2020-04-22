#include<bits/stdc++.h>
typedef long long ll;
#define pi 3.1415926535
#define mod 100000000                       //change when needed
 using namespace std;
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     int n,m,d;
    cin>>n>>m>>d;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    int yes=1;
    int ans=0;
    int middle=v.size()/2;
    for(int i=0;i<v.size();i++)
    {
        if((v[i]-v[middle])%d!=0)
        {
            yes=0;
            break;
        }
        else
        {
            ans+=abs((v[i]-v[middle])/d);
        }
    }
    if(yes)
    cout<<ans<<"\n";
    else
    cout<<-1<<"\n";
}