#include <iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<set>
using namespace std;
bool chk(long int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        return false;
    }
    return true;
}
int main() {
 // your code goes here
    long long int n,m;
    cin>>n>>m;
    long long int ans=0;
    while(1)
    {
        n--;
        ans++;
        if(ans%m==0)
        n++;
        if(n==0)
        break;
    }
    cout<<ans;
 return 0;
}