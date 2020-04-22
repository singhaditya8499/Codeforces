#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    ll k;
    cin>>k;
    string s;
    cin>>s;
    ll sum=0;
    for(int i=0;i<s.length();i++)
        sum+=(s[i]-'0');
    if(sum>=k)
    {
        cout<<0<<"\n";
    }
    else
    {
        sort(s.begin(),s.end());
        int i=0;
        int ans=0;
        while(sum<k)
        {
            int cur=9-(s[i]-'0');
            ans++;
            sum+=cur;
            i++;
        }
        cout<<ans<<"\n";
    }
}