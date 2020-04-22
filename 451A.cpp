#include<iostream>
using namespace std;
int main()
{
    int n,m,min;
    cin>>n;
    cin>>m;
    if(n<m)
    min=n;
    else
    min=m;
    if(min%2==0)
    cout<<"Malvika";
    else
    cout<<"Akshat";
    return 0;
}