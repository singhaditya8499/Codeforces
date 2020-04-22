#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define pi 3.1415926535
#define mod 379                       //change when needed
 using namespace std;
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    vector<int> v;
    v.push_back(0);
    for(int i=1;i<=n;i++)
    v.push_back(i);
    for(int i=1;i<=n;i++)
    v.push_back(i);
     int i=a;
    int j=b;
    int ans=1;
    if(i==j)
    {
        cout<<"YES\n";
        return 0;
    }
    while(i!=x&&j!=y)
    {
        // cout<<i<<" "<<j<<"\n";
        if(i==n)
        {
            i=1;
        }
        else
        {
            i++;
        }
        if(j==1)
        {
            j=n;
        }
        else
        {
            j--;
        }
        if(i==j)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}