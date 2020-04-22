#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int main()
{
    int n,x,t=0,r=0,maxx=-99999;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==0)
            t++;
        else
        {
            t--;
            r++;
        }
        if(t>maxx)
            maxx=t;
        if(t<0)
            t=0;
    }
    cout<<maxx+r;
    return 0;
}