#include<bits/stdc++.h>
using namespace std;
const int MAX=1e3+9;
int a[MAX],x,n,ans=0;
int main()
{
 cin>>n;
 for (int i=0;i<n;i++) cin>>x,a[x]++,ans=max(ans,a[x]);
 cout<<n-ans;
}