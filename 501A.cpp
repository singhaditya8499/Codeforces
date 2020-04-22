#include <iostream>
using namespace std;
 int main() 
{
 // your code goes here
 int a,b,c,d,ma,mb;
 cin>>a>>b>>c>>d;
 if((3*a)/10>(a-(a/250)*c))
 ma=(3*a)/10;
 else
 ma=(a-(a/250)*c);
 if((3*b)/10>(b-(b/250)*d))
 mb=(3*b)/10;
 else
 mb=(b-(b/250)*d);
 if(ma>mb)
 cout<<"Misha";
 else
 if(mb>ma)
 cout<<"Vasya";
 else
 cout<<"Tie";
 return 0;
}