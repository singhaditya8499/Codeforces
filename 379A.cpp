#include <iostream>
using namespace std;
 int main()
{
    int a,b;
    cin>>a>>b;
    long int ans=0;
    ans=a;
    while(a>=b)
    {
        int tmp=a;
        a=a/b;
        ans=ans+a;
        a=a+tmp%b;
    }
    cout<<ans;
    return 0;
}