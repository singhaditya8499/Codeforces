#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int r;
 cin>>r;
 int x,y,x1,y1;
 cin>>x>>y>>x1>>y1;
 double tmp=sqrt(pow(y1-y,2)+pow(x1-x,2));
 cout<<ceil(tmp/(2*r));
}