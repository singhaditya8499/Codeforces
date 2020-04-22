#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    long long int x,ans=0;
    cin>>n>>x;
    if(x<=n)
    {
        for(int i=1;i<sqrt(x);i++)
        {
            if(x%i==0)
            {
                if(x/i<=n)
                    ans=ans+2;
            }
        }
        if(sqrt(x)==int(sqrt(x)))
            ans++;
        cout<<ans;
    }
    else
    {
        for(int i=1;i<sqrt(x)&&i<=n;i++)
        {
            if (x%i==0)
            {
                if(x/i<=n)
                    ans=ans+2;
            }
        }
        if(sqrt(x)==int(sqrt(x))&&sqrt(x)<=n)
            ans++;
        cout<<ans;
    }
    return 0;
}