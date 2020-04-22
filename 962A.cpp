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
    int arr[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    double x=(float(sum))/2;
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(double(sum)>=x)
        {
            cout<<i+1<<"\n";
            break;
        }
    }
}