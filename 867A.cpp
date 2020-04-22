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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sf=0,fs=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
            continue;
        if(s[i-1]=='F')
            fs++;
        else
            sf++;
    }
    if(sf>fs)
        cout<<"YES\n";
    else
        cout<<"NO\n";
 }