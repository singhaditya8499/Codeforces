#include <iostream>
using namespace std;
 int main() {
 // your code goes here
 int n,c=0,b=0,ba=0,i;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 {
  cin>>a[i];
  if(i==0||i%3==0)
  c=c+a[i];
  if(i%3==1)
  b=b+a[i];
  if(i%3==2)
  ba=ba+a[i];
 }
 if(c>b&&c>ba)
 cout<<"chest";
 else
 if(b>c&&b>ba)
 cout<<"biceps";
 else
 cout<<"back";
 return 0;
}