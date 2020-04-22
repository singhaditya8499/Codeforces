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
    int n;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='C')
                cnt++;
        }
        ans=ans+(cnt*(cnt-1))/2;
    }
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j][i]=='C')
                cnt++;
        }
        ans=ans+(cnt*(cnt-1))/2;
    }
    cout<<ans<<"\n";
}