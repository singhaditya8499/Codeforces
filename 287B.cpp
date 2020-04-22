#include <bits/stdc++.h>
using namespace std;
#define loop(i,b,e) for(int i=b;i<=e;i++)
#define loop2(i,e,b) for(int i=e;i>=b;i--)
typedef long long ll;
typedef unsigned long long ull;
 ll n,k,su;
 ll sum(ll m){
 if(m<=1)
  return su;
 return su-((m*(m+1))/2);
}
 ll b(){
 ll s,e,m;
 s = 1;
 e = k;
 while(s<e){
  m = (s+e)/2;
  ll sm = sum(m);
  if(sm==n) return k-m+1;
  if(sm>n) s = m+1;
  else e = m;
 }
 return k-s+1;
}
 int main(){
 cin>>n>>k;
 if(n==1){
  printf("0");
  return 0;
 }
 if(n<=k){
  printf("1");
  return 0;
 }
 k--;
 n--;
 if((k*(k+1)/2)<n){
  printf("-1");
  return 0;
 }
 su = k*(k+1)/2;
 cout<<b();
}