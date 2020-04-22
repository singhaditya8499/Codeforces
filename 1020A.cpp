#include <bits/stdc++.h>
using namespace std;
 int main() {
 int n,h,a,b,k,x,y,i,j;
 cin>>n>>h>>a>>b>>k;
 while(k--){
     cin>>x>>y>>i>>j;
     if(x==i) cout<<abs(j-y)<<"\n";
     else{
         cout<<abs(x-i) + (y>b?y-b+abs(j-b):0) + (y<a?a-y+abs(a-j):0)+(y>=a&&y<=b?abs(j-y):0)<<"\n" ;
     }
 }
 return 0;
}