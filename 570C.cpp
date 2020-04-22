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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='.'&&s[i-1]=='.')
            cnt++;
    }
    while(m--)
    {
        int x;
        char c;
        cin>>x>>c;
        x--;
        int t=0;
        if(s[x]=='.'&&c!='.')
        {
            t=-1;
        }
        else if(s[x]!='.'&&c=='.')
        {
            t=1;
        }
        s[x]=c;
        if(x>0)
        {
            if(s[x-1]=='.')
                cnt=cnt+t;
        }
        if(x<s.length()-1)
        {
            if(s[x+1]=='.')
                cnt=cnt+t;
        }
        cout<<cnt<<"\n";
    }
}