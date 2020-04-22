#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool isprime(int x)
{
    if(x==2)
        return true;
    if(x<3)
        return false;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=n+1;;i++)
    {
        if(isprime(i))
        {
            if(i!=m)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
            break;
        }
    }
}