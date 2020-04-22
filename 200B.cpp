#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double x;
    for(int i=0;i<n;i++)
    {
     int a;
     cin>>a;
     x+=a;
    }
    cout<<x/n;
    return 0;
}