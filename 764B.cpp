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
    int change=1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<=j)
    {
        if(change)
        {
            int tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
            change=1-change;
        }
        else
        {
            change=1-change;
        }
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}