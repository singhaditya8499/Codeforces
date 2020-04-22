#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
 int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int suml=0,sumr=0;
    int i=0,j=s.length()-1;
    int ans=1;
    while(i<j)
    {
        suml+=(s[i]-'0');
        sumr+=(s[j]-'0');
        if(s[i]!='4'&&s[i]!='7')
            ans=0;
        if(s[j]!='4'&&s[j]!='7')
            ans=0;
        i++;
        j--;
    }
    if(suml!=sumr)
        ans=0;
    if(ans)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}