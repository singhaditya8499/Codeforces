#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(pair<char,int> a,pair<char,int> b)
{
    return a.second<b.second;
}
int main()
{
    int arr[1000005];
    memset(arr,0,sizeof arr);
    for(int i=2;i<=1000000;i++)
    {
        if(!arr[i])
        {
            for(int j=i*2;j<=1000000;j+=i)
                arr[j]=1;
        }
    }
    int n;
    cin>>n;
    if(n==2)
    {
        cout<<1<<"\n";
        cout<<1<<" "<<1<<"\n";
    }
    else if(n==1)
    {
        cout<<1<<"\n";
        cout<<1<<"\n";
    }
    else
    {
        cout<<2<<"\n";
        for(int i=1;i<=n;i++)
        {
            if(arr[i+1]==0)
                cout<<1<<" ";
            else
                cout<<2<<" ";
        }
        cout<<endl;
    }
}