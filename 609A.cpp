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
    int m;
    cin>>m;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n,cmp);
    int i=1;
    while(i<n&&arr[0]<m)
    {
        arr[0]+=arr[i];
        i++;
    }
    cout<<i<<"\n";
}