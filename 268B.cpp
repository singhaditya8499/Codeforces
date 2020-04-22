#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int ans=n;
    int k=n-1;
    for(int i=1;i<n;i++)
    {
     ans=ans+k*i;
     k--;
    }
    cout<<ans;
    return 0;
}