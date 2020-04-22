#include<bits/stdc++.h>
#include<unordered_map>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
         ll ans=0;
        while(n)
        {
            if(n==1)
            {
                ans++;
                n=0;
            }
            else if(n%k==0)
            {
                ans++;
                n=n/k;
            }
            else
            {
                ans+=(n-(n/k)*k);
                n=(n/k)*k;
            }
        }
        cout<<ans<<"\n";
    }
}