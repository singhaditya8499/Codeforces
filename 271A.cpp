#include <iostream>
#include<set>
using namespace std;
 int main() {
 // your code goes here
 int n;
 cin>>n;
 int ans=n+1,tmp,c=1;
 while(1)
 {
     c=1;
     int a[10]={0};
     tmp=ans;
     while(tmp)
     {
         if(a[tmp%10]==1)    
         {
             ans++;
             c=0;
             break;
         }
         a[tmp%10]=1;
         tmp=tmp/10;
     }
     if(c==1)
     {
         cout<<ans;
         break;
     }
 }
 return 0;
}