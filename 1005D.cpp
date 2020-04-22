#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<utility>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int ans[len+1];
    ans[0]=0;
    int rem[3];
    rem[0]=rem[1]=rem[2]=-1;
    rem[0]=0;
    int r=0;
    for(int i=1;i<=len;i++)
    {
        r=(r+s[i-1]-'0')%3;
        ans[i]=ans[i-1];
        if(rem[r]!=-1)
            ans[i]=max(ans[i],ans[rem[r]]+1);
        rem[r]=i;
    }
    cout<<ans[len];
}