#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(ll a,ll b)
{
    return a>b;
}
 int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++)
        cin>>arr[i][0]>>arr[i][1];
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(k>=arr[i][0]&&k<=arr[i][1])
        {
            cout<<n-i<<"\n";
            return 0;
        }
    }
    cout<<0<<"\n";
}