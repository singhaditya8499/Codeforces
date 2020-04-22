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
    int ma=-1;
    int arr[n],total=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ma=max(ma,arr[i]); 
        total+=arr[i];   
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(ma-arr[i]);
    }
    while(sum<=total)
    {
        sum=sum+n;
        ma++;
    }
    cout<<ma<<"\n";
 }