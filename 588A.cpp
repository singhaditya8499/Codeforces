#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int main() {
 long int n,a,x;
 cin>>n;
 long int p=1e9,ans=0;
 while(n--)
 {
  cin>>a>>x;
  p=min(p,x);
  ans+=p*a;
 }
 cout<<ans;
 return 0;
}