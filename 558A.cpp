#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
main()
{int n,i,ne=0,po=0,ans=0,x,y;cin>>n;pair<int,int>a[1000];
for(i=0;i<n;i++){cin>>x>>y;a[i]=make_pair(x,y);
if(x<0){ne++;}else{po++;}}sort(a,a+n);
for(i=max(0,ne-po-1);i<=min(n,ne*2);i++)
{ans=ans+a[i].second;}
cout<<ans;}