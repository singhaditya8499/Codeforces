#include<iostream>
using namespace std;
int main()
{
    int n,m,ans=1;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<m;i++)
        {
            char a;
            cin>>a;
            if(a=='C'||a=='M'||a=='Y')
                ans=0;
        }
    }
    if(ans==1)
        cout<<"#Black&White";
    else
        cout<<"#Color";
    return 0;
}