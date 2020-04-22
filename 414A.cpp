#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
 int main()
{
    ll n,k;
    cin>>n>>k;
    ll temp=k;
    temp-=(n-2)/2;
    if(n==1&&k==0)
    {
        cout<<1<<"\n";
        return 0;
    }
    if(temp<1||(n==1&&k>0))
    {
        cout<<-1<<"\n";
        return 0;
    }
    cout<<temp<<" "<<temp*2<<" ";
    for(int i=0;i<n-2;i++)
        cout<<i+1+2*temp<<" ";
    cout<<endl;
}