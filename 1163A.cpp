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
    int n,m;
    cin>>n>>m;
    if(n%2==1)
    {
        if(m==0)
        {
            cout<<1<<"\n";
            return 0;
        }
        if(m<=n/2)
        {
            cout<<m<<"\n";
            return 0;
        }
        if(m==(n/2+1))
        cout<<n/2<<"\n";
        else
        {
            cout<<n/2-(m-(n/2+1))<<"\n";
        }
    }
    else
    {
        if(m==0)
        cout<<1<<"\n";
        else if(m<=n/2)
        {
            cout<<m<<"\n";
        }
        else
        {
            cout<<n-m<<"\n";
        }
    }
    }