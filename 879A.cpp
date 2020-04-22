#include<iostream>
using namespace std;
main()
{
int n,i,s,d,t=0;
cin>>n;
for(i=0;i<n;i++)
{
cin>>s>>d;
while(s<=t)
{
s=s+d;
}
t=s;
}
cout<<s<<endl;
}