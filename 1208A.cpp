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
        int a,b,n;
        cin>>a>>b>>n;
        if(n%3==0)
        cout<<a<<"\n";
        else if(n%3==1)
        cout<<b<<"\n";
        else
        {
            cout<<(a^b)<<"\n";
        }
            }
}