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
    long long int n;
    cin>>n;
    //cout<<chk(4);
    for(int i=3;i<=n/2+1;i++)
    {
        if(!chk(i))
        {
            //cout<<i<<endl;
            if(!chk(n-i))
            {
                cout<<i<<" "<<n-i;
                return 0;
            }
        }
            }
 return 0;
}