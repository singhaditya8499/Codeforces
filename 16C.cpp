#include <iostream>
#include<algorithm>
using namespace std;
int main() {
 // your code goes here
 long int a,b,x,y,ln,ld,ox,oy;
 cin>>a>>b>>x>>y;
    long int g=__gcd(x,y);
    x=x/g;
    y=y/g;
    a=min(a/x,b/y);
    cout<<x*a<<" "<<y*a;
 return 0;
}