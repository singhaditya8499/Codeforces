#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
 int a,b,c,ans=0,ans1=0,ans2=0;
 cin>>a>>b>>c;
 cout<<min(a,min(b/2,c/4))*7;
}