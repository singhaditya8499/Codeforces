#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(ll a,ll b)
{
    return a>b;
}
 int main()
{
    ll a,b;
    cin>>a>>b;
    ll fa=sqrt(a);
    if(b>=(fa*(fa+1)))
    {
        cout<<"Vladik\n";
    }
    else
    {
        cout<<"Valera\n";
    }
}