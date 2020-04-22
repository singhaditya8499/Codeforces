#include "bits/stdc++.h"
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==1&&b==0||b==1&&a==0)
    {
        cout<<"YES";
        return 0;
    }
    if(a==0&&b==0)
    {
        cout<<"NO";
        return 0;
    }
    if(abs(a-b)<=1)
    cout<<"YES";
    else
    cout<<"NO";
}