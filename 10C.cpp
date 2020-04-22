#include <iostream>
using namespace std;
int main() {
 // your code goes here
 long long int a[10]={0},n,sum=0;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     a[i%9]++;
     sum=sum-n/i;
 }
 for(int i=0;i<9;i++)
 {
     for(int j=0;j<9;j++)
     {
         sum=sum+a[i]*a[j]*a[(i*j)%9];
     }
 }
 cout<<sum;
 return 0;
}