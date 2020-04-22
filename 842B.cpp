#include<bits/stdc++.h>
using namespace std;
double r,d,n,x,y,r1,ans,c;
main(){
cin>>r>>d>>n;
while(n--){
cin>>x>>y>>r1;
c=sqrt(x*x+y*y);
if(c+r1<=r && r-c+r1<=d) ans++;
}
cout<<ans;
}