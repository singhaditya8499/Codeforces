#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long n,MAX=-1,MIN=INT_MAX;
    cin>>n;
    int f[n];
    for(int i=0;i<n;i++)
    {
        cin>>f[i];
        if(f[i]>MAX)
            MAX=f[i];
        if(MIN>f[i])
            MIN=f[i];
    }
    long long mx_count=0,mn_count=0;
    for(int i=0;i<n;i++)
    {
        if(f[i]==MAX)
            mx_count++;
        if(f[i]==MIN)
            mn_count++;
    }
    cout<<MAX-MIN<<' ';(MIN!=MAX)?cout<<mx_count*mn_count : cout<<(mn_count*(mn_count-1))/2;
    return 0;
}