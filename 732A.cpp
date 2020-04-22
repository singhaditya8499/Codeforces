#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    long int ans=1;
    while (ans<10) 
    {
  if((k*ans)%10==r||(k*ans)%10==0)
   break;
  ans++;
 }
 cout<<ans;
    return 0;
}