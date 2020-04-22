#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
  int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int start=0;
    int ans=0,change=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1&&start==0)
        {
            start=1;
            change++;
            ans++;
        }
        else if(arr[i]==1&&start==1)
        {
            ans++;
        }
        else if(arr[i]==0&&start==1)
        {
            start=0;
            //ans++;
        }
    }
    if(change)
    ans=ans+(change-1);
    cout<<ans<<"\n";
}