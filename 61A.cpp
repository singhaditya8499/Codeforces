#include <iostream>
using namespace std;
 int main() {
 // your code goes here
 string a,b;
 cin>>a>>b;
 for(int i=a.length()-1;i>=0;i--)
 {
     if((a[i]=='0'&&b[i]=='0')||(a[i]=='1'&&b[i]=='1'))
     a[i]='0';
     else
     a[i]='1';
 }
 cout<<a;
 return 0;
}