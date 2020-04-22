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
    int n,k;
    cin>>n>>k;
    int arr[105];
    memset(arr,0,sizeof arr);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[x]=1;
    }
    int cnt=0;
    for(int i=0;i<k;i++)
    {
        if(arr[i]==0)
            cnt++;
    }
    if(arr[k]==1)
        cnt++;
    cout<<cnt<<"\n";
 }