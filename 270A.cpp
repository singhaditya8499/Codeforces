#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int main() {
 int t;
 cin>>t;
 while(t--)
 {
  int a;
  cin>>a;
  if(360%(180-a)==0)
   cout<<"YES"<<endl;
  else
   cout<<"NO"<<endl;
 }
 return 0;
}