#include<iostream>
using namespace std;
int i,n,k,x,a[105],p,y;
main(){
 string s;
 cin>>n>>k;
 for(i=0;i<n;i++){
  cin>>s;
  a[s.size()]++;}
 cin>>s; p=s.size();
 for(i=1;i<p;i++){
  x+=a[i];}
 for(i=1;i<=p;i++){
  y+=a[i];}
 cout<<x+1+x/k*5<<" "<<y+(y-1)/k*5;}