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
bool cmp(pair<ll,int> a,pair<ll,int> b)
{
    if(a.first!=b.first)
    return a.first<b.first;
     return a.second>=b.second;
}
 int main()
{
    string s;
    cin>>s;
    int m;
    cin>>m;
    int arr[s.length()+1];
    memset(arr,0,sizeof arr);
    while(m--)
    {
        int x;
        cin>>x;
        x--;
        arr[x]+=1;
        arr[s.length()-x]+=(-1);
    }
    for(int i=1;i<=s.length();i++)
    {
        arr[i]+=arr[i-1];
    }
    char ans[s.length()];
    for(int i=0;i<s.length();i++)
    {
        if(arr[i]%2==0)
        {
            ans[i]=s[i];
        }
        else
        {
            ans[s.length()-1-i]=s[i];
        }
    }
    for(int i=0;i<s.length();i++)
        cout<<ans[i];
    cout<<endl;
}