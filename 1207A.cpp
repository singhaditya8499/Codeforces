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
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int h,f;
        cin>>h>>f;
        int ans=0;
        if(h>f)
        {
            int x=min(b,a/2);
            ans+=h*x;
            a=a-2*x;
            b=b-x;
            x=min(c,a/2);
            ans+=x*f;
            c-=x;
            a=a-2*x;
            cout<<ans<<"\n";
        }
        else
        {
            int x=min(c,a/2);
            ans+=f*x;
            a=a-2*x;
            c=c-x;
            x=min(b,a/2);
            ans+=x*h;
            b-=x;
            a=a-2*x;
            cout<<ans<<"\n";
        }
    }
}