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
int main()
{
    int n,k;
    cin>>n>>k;
    string ans[n];
    fill(ans,ans+n,"...");
    int len=0,cur=0;
    string haha="A";
    cin.ignore();
    for(int i=0;i<n-k+1;i++)
    {
        string s;
        cin>>s;
        if(s=="NO")
        {
            if(ans[i]=="...")
            ans[i]=haha+char(cur+'a');
            ans[i+k-1]=ans[i];
            // cout<<ans[i]<<" "<<ans[i+k-1]<<"\n";
            cur++;
            if(cur==26)
            {
                haha=haha+'a';
                cur=0;
            }
        }
        else
        {
            if(ans[i]=="...")
            ans[i]=haha+char(cur+'a');
            cur++;
            if(cur==26)
            {
                haha=haha+'a';
                cur=0;
            }
            ans[i+k-1]=haha+char(cur+'a');
            cur++;
            if(cur==26)
            {
                haha=haha+'a';
                cur=0;
            }
         }
    }
    for(int i=0;i<n;i++)
    {
        if(ans[i]=="...")
        {
            ans[i]=haha+char('a'+cur);
            cur++;
            if(cur==26)
            {
                cur=0;
                haha=haha+'a';
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}