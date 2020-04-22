#include <iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<set>
using namespace std;
 int main() {
 // your code goes here
    long long int n;
    cin>>n;
    if(n%2==1)
    {
        long long int ans=(-1-n)/2;
        cout<<ans;
    }
    else
    {
        cout<<n/2;
    }
 return 0;
}