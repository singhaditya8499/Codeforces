#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int a[12];
 for(int i=0;i<12;i++)
  cin>>a[i];
 sort(a,a+12);
 int i=11;
 for(i=11;i>=0&&n>0;i--)
 {
  n=n-a[i];
 }
 if(n<=0)
 cout<<11-i;
 else
 cout<<-1;
 return 0;
}
 