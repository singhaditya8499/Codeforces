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
    string ans;
    int vowel=0;
    if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u'||s[0]=='y')
        vowel=1;
    ans=ans+s[0];
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
        {
            if(vowel)
                continue;
            else
            {
                vowel=1;
                ans=ans+s[i];
            }
        }
        else
        {
            ans=ans+s[i];
            vowel=0;
        }
    }
    cout<<ans<<"\n";
}