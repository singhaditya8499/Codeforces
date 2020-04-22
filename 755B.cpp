#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int main() {
 // your code goes here
 int n,m;
 cin>>n>>m;
 if(n>m)
 {
     cout<<"YES";
     return 0;
 }
 if(m>n)
 {
     cout<<"NO";
     return 0;
 }
 vector<string> a(1003);
 string tmp;
 for(int i=0;i<n;i++)
 {
     cin>>tmp;  
     a.push_back(tmp);
 }
 int f=0;
 for(int i=0;i<m;i++)
 {
     cin>>tmp;
     for(int i=0;i<a.size();i++)
     {
         if(a[i]==tmp)
         {
             f++;
             break;
         }
     }
 }
 if(f%2==1)
 cout<<"YES";
 else
 cout<<"NO";
 return 0;
}