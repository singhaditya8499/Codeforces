#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,n,ans=0;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    if((a1+a2+a3)%5==0)
        ans=ans+(a1+a2+a3)/5;
    else
        ans=ans+(a1+a2+a3)/5+1;
    if((b1+b2+b3)%10==0)
        ans=ans+(b1+b2+b3)/10;
    else
        ans=ans+(b1+b2+b3)/10+1;
    if(ans<=n)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}