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
    cin>>n;
    if(n%5!=0)
    cout<<n/5+1;
    else
    cout<<n/5;
 return 0;
}