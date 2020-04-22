#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void generate(vector<ll> &v,ll &x)
{
    if(x>=10000000000)
        return;
    v.push_back(x);
    ll y=x*10+4;
    generate(v,y);
    y=x*10+7;
    generate(v,y);
}
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    int ans=0;
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<s[0].length()-1;j++)
        {
            if(s[i][j]=='X'&&s[i-1][j-1]=='X'&&s[i-1][j+1]=='X'&&s[i+1][j-1]=='X'&&s[i+1][j+1]=='X')
                ans++;
        }
    }
    cout<<ans<<"\n";
}