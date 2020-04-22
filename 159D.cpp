#include<bits/stdc++.h>
using namespace std;
 int main()
{
 string s;
 cin>>s;
 int first[s.length()],last[s.length()];
 memset(first,0,sizeof first);
 memset(last,0,sizeof last);
 for(int i=0;i<s.length();i++)
 {
     for(int j=i;j<s.length();j++)
     {
         int pal=1;
         int k=i,l=j;
         while(k<=l)
         {
             if(s[k]!=s[l])
             {
                 pal=0;
                 break;
             }
             k++;
             l--;
         }
         if(pal)
         first[i]++,last[j]++;
     }
 }
 long long int ans=0;
 for(int i=0;i<s.length();i++)
 {
     for(int j=i+1;j<s.length();j++)
     ans+=first[j]*last[i];
 }
 cout<<ans;
}