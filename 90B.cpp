#include<bits/stdc++.h>
using namespace std;
int const M=1000+10;
int cntr[M][30],cntc[M][30];
char a[M][M];
main()
{
 int n,m;
 cin>>n>>m;
 for(int i=1;i<=n;i++)
  for(int j=1;j<=m;j++)
   cin>>a[i][j],cntr[i][a[i][j]-'a']++,cntc[j][a[i][j]-'a']++;
 for(int i=1;i<=n;i++)
  for(int j=1;j<=m;j++)
   if(cntr[i][a[i][j]-'a']==1 && cntc[j][a[i][j]-'a']==1)
    cout<<a[i][j];
}