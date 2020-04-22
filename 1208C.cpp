#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int temp[n/2][n/2];
    int cur=0;
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            temp[i][j]=cur++;
        }
    }
    // for(int i=0;i<n/2;i++)
    // {
    //     for(int j=0;j<n/2;j++)
    //     cout<<temp[i][j]<<" ";
    //     cout<<endl;
    // }
    int ans[n][n];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=i*n/2;k<(i*(n/2))+n/2;k++)
            {
                for(int l=j*n/2;l<(j*n/2)+n/2;l++)
                {
                    ans[k][l]=temp[k-i*n/2][l-j*n/2]*4+(i*2)+j;
                    // cout<<k<<" "<<l<<"\n";
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}