#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n-1];
    for(int i=1;i<=n-1;i++)
     cin>>a[i];
    int i = 1;
    while (i < t)
        i += a[i];
    if (i == t)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}