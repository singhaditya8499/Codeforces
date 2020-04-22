#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int a,b,c,d,ans=0;
 cin>>a>>b;
 if(a==b)
 ans++;
 cin>>c;
 if(a==c||b==c)
 ans++;
 cin>>d;
 if(d==a||d==b||d==c)
 ans++;
 cout<<ans;
 return 0;
}