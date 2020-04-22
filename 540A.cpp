#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    long int ans=0;
    for(int i=0;i<n;i++)
    {
     if(t[i]>s[i])
     {
      ans=ans+min(t[i]-s[i],s[i]+10-t[i]);
     }
     else
     {
      ans=ans+min(s[i]-t[i],10-s[i]+t[i]);
     }
     //cout<<ans<<" ";
    }
    cout<<ans;
    return 0;
}