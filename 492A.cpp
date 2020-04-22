#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    long int tmp=0,ans=0;
    for(i=1;tmp<n;i++)
    {
        tmp+=i*(i+1)/2;
        if(tmp<=n)
            ans=i;
        //cout<<i<<" ";
    }
    cout<<ans;
    return 0;
}