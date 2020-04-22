#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
bool cmp(pair<ll,int> a,pair<ll,int> b)
{
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int t=0;
    int i=0,j=n-1;
    int cnta=0,cntb=0,x=1,y=1;
    do
    {
        x--;
        y--;
        x=max(x,0);
        y=max(y,0);
        if(x==0&&i<=j)
        {
            x+=arr[i];
            cnta++;
            i++;
        }
        if(y==0&&i<=j)
        {
            y+=arr[j];
            cntb++;
            j--;
        }
        // cout<<t++<<"\n";
    }while((x+y)!=0);
    cout<<cnta<<" "<<cntb<<"\n";
}