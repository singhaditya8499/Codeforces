#include<bits/stdc++.h>
typedef long long ll;
#define pi 3.1415926535
#define mod 100000000                       //change when needed
 using namespace std;
 int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> arr[n];
    int sum=0,ans[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            arr[i].push_back(x);
            if(j==0)
            {
                sum=sum^x;
                ans[i]=0;
            }
        }
    }
    if(sum!=0)
    {
        cout<<"TAK\n";
        for(int i=0;i<n;i++)
        cout<<ans[i]+1<<" ";
        cout<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(arr[i][j]!=arr[i][0])
            {
                ans[i]=j;
                cout<<"TAK\n";
                for(int k=0;k<n;k++)
                cout<<ans[k]+1<<" ";
                cout<<endl;
                return 0;
            }
        }
    }
    cout<<"NIE\n";
    return 0;
}