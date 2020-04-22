#include <iostream>
using namespace std;
 int main() {
 // your code goes here
 string s;
 cin>>s;
 int l=s.length();
 int a[7]={0};
 for(int i=0;i<l;i++)
 {
     if(s[i]=='B')
     a[0]++;
     if(s[i]=='u')
     a[1]++;
     if(s[i]=='l')
     a[2]++;
     if(s[i]=='b')
     a[3]++;
     if(s[i]=='a')
     a[4]++;
     if(s[i]=='s')
     a[5]++;
     if(s[i]=='r')
     a[6]++;
  }
  a[4]=a[4]/2;
  a[1]=a[1]/2;
  int mi=1000009;
  for(int i=0;i<7;i++)
  if(a[i]<mi)
  mi=a[i];
  cout<<mi;
 return 0;
}