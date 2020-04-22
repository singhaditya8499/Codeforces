#include <iostream>
using namespace std;
 int main() {
 // your code goes here
 long int n;
 cin>>n;
 if(n<=5||n%2==1)
 {
  cout<<0;
  return 0;
 }
 if(n/2%2==0)
 {
  cout<<(n/2)/2-1;
 }
 else
 {
  cout<<(n/2)/2;
 }
 return 0;
}