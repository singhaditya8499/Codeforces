#include <iostream>
#include<algorithm>
using namespace std;
 int main() {
 // your code goes here
 int n,c1=0;
 cin>>n;
 int ma=1,tmpma=0,x;
 int a[100010]={0};
 for(int i=0;i<n;i++)
 {
     cin>>x;
     a[x]++;
 }
 for(int i=2;i<100010;i++)
 {
     tmpma=0;
     for(int j=i;j<100010;j=j+i)
     tmpma+=a[j];
     if(tmpma>ma)
     ma=tmpma;
 }
 cout<<ma;
 return 0;
}