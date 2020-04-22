#include<iostream>
using namespace std;
int main()
{
 long int t,s,x;
 cin>>t>>s>>x;
 if(((x-1-t)%s==0||(x-t)%s==0)&&(x-1-t)!=0&&x>=t)
 {
  cout<<"YES\n";
 }
 else
 cout<<"NO\n";
}