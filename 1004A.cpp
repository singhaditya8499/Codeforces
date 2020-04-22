#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int solve(vector<float> &anss,double arr[],double start,double end,int n)
{
    if(start+0.0000001>=end)
    return 0;
    double m=start+(end-start)/2;
    double ans=0.0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<m)
        {
            ans=ans+1.0/(m-arr[i]);
        }
        else if(arr[i]>m)
        {
            ans=ans-1.0/(arr[i]-m);
        }
    }
    cout<<m<<" "<<ans<<"\n";
    if(ans<=0.00000000000001&&ans>=-0.0000000000001)
    {
        anss.push_back(m);
        solve(anss,arr,start,m-0.0000001,n);
        solve(anss,arr,m+0.0000001,end,n);
    }
    else if(ans<0)
    {
        solve(anss,arr,start,m-0.0000001,n);
    }
    else
    {
        solve(anss,arr,m+0.0000001,end,n);
    }
return 0;
}
int main()
{
    int n;
    cin>>n;
    long long d;
    cin>>d;
    set<long long> s;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
            }
    sort(arr,arr+n);
    int ans=2;
    for(int i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]==2*d)
            ans++;
        else if(arr[i]-arr[i-1]>2*d)
            ans+=2;
    }
    cout<<ans<<"\n";
}