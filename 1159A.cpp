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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='-')
        ans--;
        else
        ans++;
        if(ans<0)
        ans=0;
    }
    cout<<ans<<"\n";
}