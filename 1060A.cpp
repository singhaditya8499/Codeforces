#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b)
{
    if(a.second.second!=b.second.second)
        return a.second.second<b.second.second;
    else
    {
        if(a.first!=b.first)
            return a.first<b.first;
        else
        {
            return a.second.first>b.second.first;
        }
    }
}
 int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[10];
    memset(arr,0,sizeof arr);
    for(int i=0;i<s.length();i++)
        arr[s[i]-'0']++;
    int cnt8=0,cnt=0;
    for(int i=0;i<10;i++)
    {
        if(i==8)
            cnt8=arr[8];
        else
            cnt+=arr[i];
    }
    int ans=min(cnt8,cnt/10);
    cnt8-=ans;
    cnt=cnt%10;
    int all=cnt8+cnt;
    ans+=all/11;
    cout<<ans<<"\n";
}