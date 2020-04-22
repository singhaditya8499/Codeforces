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
    string s;
    cin>>s;
    int ind=-1,cnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1'&&ind==-1)
        {
            ind=1;
        }
        if(s[i]=='0'&&ind==1)
            cnt++;
    }
    if(ind==1&&cnt>=6)
        cout<<"yes\n";
    else
        cout<<"no\n";
}