#include<bits/stdc++.h>
using namespace std;
long long n,s[105],s1[105],ans,x,y;
int main()
{
cin>>n;
for(int i=0;i<n;i++)
{
cin>>x;
s[x]++;
}
for(int i=0;i<n;i++)
{
cin>>y;
s1[y]++;
}
for(int i=1;i<=5;i++)
{
if(abs(s1[i]-s[i])%2==1)
{
cout<<-1;
return 0;
}
ans+=abs(s1[i]-s[i])/2;
}
cout<<ans/2<<endl;
}