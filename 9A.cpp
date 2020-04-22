#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b;
 cin>>a>>b;
 int num=6-max(a,b)+1;
 int den=6;
 cout<<num/(__gcd(num,den))<<"/"<<den/(__gcd(num,den));
}