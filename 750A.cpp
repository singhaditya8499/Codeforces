#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    long int ans=240;
    ans=ans-k;
    int i=1;
    while(ans>0&&i<=n)
    {
     if(5*i<=ans)
     {
      ans=ans-5*i;
      i++;
     }
     else
      break;
    }
    cout<<i-1;
    return 0;
}