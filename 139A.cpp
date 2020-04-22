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
    int arr[7];
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
        // sum+=arr[i];
    }
    while(n)
    {
        for(int i=0;i<7;i++)
        {
            n=n-arr[i];
            if(n<=0)
            {
                cout<<i+1<<"\n";
                return 0;
            }
        }
    }
}