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
    int d,sum;
    cin>>d>>sum;
    int arr[d][2];
    int mint=0,maxt=0;
    for(int i=0;i<d;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
        mint+=arr[i][0];
        maxt+=arr[i][1];
    }
    if(sum>=mint&&sum<=maxt)
    {
        cout<<"YES\n";
        sum-=mint;
        while(sum)
        {
            for(int i=0;i<d;i++)
            {
                if(arr[i][0]<arr[i][1]&&sum)
                {
                    arr[i][0]++;
                    sum--;
                }
            }
        }
        for(int i=0;i<d;i++)
            cout<<arr[i][0]<<" ";
        cout<<endl;
    }
    else
    {
        cout<<"NO\n";
    }
}