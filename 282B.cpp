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
    int n;
    cin>>n;
    ll sa=0,sg=0;
    string ans;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        if(abs(a+sa-sg)<=500)
        {
            sa+=a;
            ans+='A';
        }
        else
        {
            sg+=b;
            ans+='G';
        }
    }
    if(abs(sa-sg)<=500)
        cout<<ans<<"\n";
    else
        cout<<-1<<"\n";
}