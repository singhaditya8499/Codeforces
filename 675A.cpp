#include "bits/stdc++.h"
using namespace std;
int main()
{
   long long int a,b,c;
   cin>>a>>b>>c;
   if(c==0&&a!=b)
   {
       cout<<"NO";
       return 0;
   }
   if(a==b)
   {
       cout<<"YES";
       return 0;
   }
   b=b-a;
   if(b%c==0)
   {
       if(b/c>0)
       {
           cout<<"YES";
           return 0;
       }
   }
   cout<<"NO";
}