#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    cout<<n*(n+1)/2%2<<'\n'<<n/2<<" ";
    for (long long i=n, j=0; i>1; i-=2, j=!j){
        cout<<i-j<<" ";
    }
    return 0;
}