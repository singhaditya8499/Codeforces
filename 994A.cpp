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
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int arr1[m];
    for(int i=0;i<m;i++)
        cin>>arr1[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i]==arr1[j])
            {
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
}