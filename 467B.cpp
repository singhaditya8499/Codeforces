#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int csb(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int fp(int a, int b)
{
       return csb(a^b);
}
int main() 
{
 int n,m,k;
 cin>>n>>m>>k;
 int a[m+1];
 for(int i=0;i<=m;i++)
  cin>>a[i];
 long int ans=0;
 for(int i=0;i<m;i++)
 {
  if(fp(a[m],a[i])<=k)
   ans++;
 }
 cout<<ans;
 return 0;
}