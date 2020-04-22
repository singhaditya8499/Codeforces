#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]-'0')%2==0)
            ans=ans+(i+1);
    }
    cout<<ans<<"\n";
}