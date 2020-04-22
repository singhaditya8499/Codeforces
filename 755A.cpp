#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 /*void sieve()
{
    for(int i=0;i<1000009;i++)
 {
     a[i]=i;
 }
    for(int i=2;i*i<=1000009;i++)
    {
        if(a[i]!=0)
        {
            for(int j=i*2;j<=1000009;j=j+i)
            a[i]=0;
        }
    }
}*/
bool a[1000009];
void sieve()
{
        memset(a, true, sizeof(a));
     for (int p=2; p*p<=1000009; p++)
    {
        if (a[p] == true)
        {
            for (int i=p*2; i<=1000009; i += p)
                a[i] = false;
        }
    }
}
int main() {
 // your code goes here
  sieve();
 int n;
 cin>>n;
 //cout<<a[5];
 //cout<<a[7];
 for(int i=1;i<=1000;i++)
 {
     if(a[i*n+1]==false)
     {
         cout<<i;
         break;
     }
 }
 return 0;
}