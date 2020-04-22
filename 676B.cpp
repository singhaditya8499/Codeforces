#include<stdio.h>
float a[11][11];
 main()
{
 int n,t,i,j,dem=0;
 scanf("%d%d",&n,&t);
 a[1][1]=t;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   if (a[i][j]>=1){
    a[i+1][j]+=(a[i][j]-1)/2;
    a[i+1][j+1]+=(a[i][j]-1)/2;
    dem++;
   } 
  }
 }
 printf("%d",dem);
}