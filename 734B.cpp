#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
 int main()
{
 int a,b,c,d;
 cin>>a>>b>>c>>d;
 int tmp=min(a,min(c,d));
 long long int ans=tmp*256;
 a=a-tmp;
 c=c-tmp;
 d=d-tmp;
 tmp=min(b,a);
 ans=ans+tmp*32;
 cout<<ans;
 return 0;
}