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
     if(s[i]=='4'||s[i]=='7')
     {
         ans++;
     }
 }
 if(ans==4||ans==7)
 cout<<"YES";
 else
 cout<<"NO";
 return 0;
}