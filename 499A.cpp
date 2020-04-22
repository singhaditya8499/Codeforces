#include<iostream>
using namespace std;
int main()
{
int n,x,a,b;
cin>>n>>x;
int begin=1;
int sum=0;
for(int i=0;i<n;i++)
        {
         cin>>a>>b;
         while(a-begin>=x){begin+=x;} 
         sum+=b-begin+1;
         begin=b+1; 
        }
cout<<sum<<endl;
return 0;
}