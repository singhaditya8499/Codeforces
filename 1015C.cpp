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
    ll si;
    cin>>si;
    ll total=0,arr[n],full=0;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        full+=a;
        arr[i]=a-b;
        total+=b;
    }
    sort(arr,arr+n,cmp);
    if(total>si)
        cout<<-1<<"\n";
    else
    {
        int i=0,cnt=0;
        while(i<n&&full>si)
        {
            full-=arr[i];
            i++;
        }
        cout<<i<<"\n";
    }
}