#include<iostream>
using namespace std;
int i,c;
int main()
{
    cin>>i;
    while(i)
    {
        c+=i%2;
        i/=2;
            }
    cout<<c;
    }