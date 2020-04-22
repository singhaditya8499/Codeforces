#include <iostream>
#include <stdio.h>
using namespace::std;
 main()
{
 ios_base::sync_with_stdio(false);     // Fast I/O
 string s;
 cin>>s;
 int l=s.length();
 int ans=0;
 for(int i=0;i<l;i++)
 {
     if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
     {
         ans=1;
         break;
     }
 }
 if(ans==1)
 cout<<"YES";
 else
 cout<<"NO";
 return 0;
}