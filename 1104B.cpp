#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(pair<char,int> a,pair<char,int> b)
{
    return a.second<b.second;
}
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    int yes=1;
    int n=s.length();
    while(n>=2&&yes==1)
    {
        yes=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                s.erase(i,2);
                n=n-2;
                yes=1;
                cnt++;
                break;
            }
        }
    }
    if(cnt%2)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}