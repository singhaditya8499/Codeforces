#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c;
 cin>>a>>b>>c;
 cout<<min(2*a+2*b,min(a+b+c,2*(min(a,b)+c)));
}