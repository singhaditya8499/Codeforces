#include<bits/stdc++.h>
using namespace std;
 void gcd(long long a,long long b,long long& d,long long& x,long long& y)
{
    if(!b)
    {
        d=a,x=1,y=0;
    }
    else
    {
        gcd(b,a%b,d,y,x);
        y-=x*(a/b);
    }
}
int main()
{
    long long a,b,c,d,x,y;
    cin>>a>>b>>c;
    c=-c;
    gcd(a,b,d,x,y);
    if(c%d!=0)
    return puts("-1"),0;
    else
    {
        printf("%lld %lld\n",x*c/d,y*c/d);
    }
}