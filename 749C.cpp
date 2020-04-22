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
 ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
 bool isprime(ll x)
{
    if(x==1)
        return false;
    if(x==2)
        return true;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> d,r;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='D')
            d.push_back(i);
        else
            r.push_back(i);
    }
    int i=0,j=0;
    int s1=d.size();
    int s2=r.size();
    int starti=0,startj=0;
    int cur=0;
    while(s1&&s2)
    {
        if(d[i]<r[j])
        {
            d.push_back(i+n);
            i++;
            j++;
            s2--;
        }
        else
        {
            r.push_back(j+n);
            j++;
            i++;
            s1--;
        }
    }
    if(s1==0)
        cout<<"R\n";
    else
        cout<<"D\n";
}