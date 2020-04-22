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
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m,cmp);
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            arr[i]=a[j];
            j++;
        }
    }
    int yes=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            yes=0;
            break;
        }
    }
    if(!yes)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}