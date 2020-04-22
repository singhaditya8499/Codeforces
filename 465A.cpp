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
    string ans;
    int cur=1;
    for(int i=0;i<s.length();i++)
    {
        int tmp=s[i]-'0';
        tmp=tmp+cur;
        ans=ans+char(tmp%2+'0');
        cur=tmp/2;
    }
    //cout<<ans<<"\n";
    int change=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=ans[i])
            change++;
    }
    cout<<change<<"\n";
}