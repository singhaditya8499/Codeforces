#include <iostream>
#include <stdio.h>
using namespace::std;
 main()
{
 ios_base::sync_with_stdio(false);     // Fast I/O
 int n;
    cin>>n;
    long int ans=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(b-a>=2)
        ans++;
    }
    cout<<ans;
 return 0;
}