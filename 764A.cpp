#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z;
    cin>>n>>m>>z;
    int g=__gcd(n,m);
    cout<<(z*g)/(n*m);
}