#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=1,h;
    cin>>h;
    while(n<=h)
    {
     if(n%2==1)
     {
      cout<<"I hate ";
      if(n!=h)
       cout<<"that ";
     }
     else
     {
      cout<<"I love ";
      if(n!=h)
       cout<<"that ";
     }
     n++;
    }
    cout<<"it";
    return 0;
}