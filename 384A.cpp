#include<stdio.h>
int main ()
{
 int j=0,i=0,n;
 scanf("%d",&n);
 printf("%d\n",n*n/2+n%2);
 for(;i<n; i++)
 {
  for(j=0;j<n; j++)
  printf("%c",((i+j)%2)?'.':'C');
  puts("");
 }
}