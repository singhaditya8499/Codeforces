#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{  int n,ans,m,i,j,k,king[6][6]={0};
 scanf("%d",&m);
 int input[10][2];
 for(i=0;i<m;i++)
 { scanf("%d%d",&input[i][0],&input[i][1]);
                 king[min(input[i][0],input[i][1])][max(input[i][0],input[i][1])]=1;
          }
     if(m<=3||m>=7)
 {
 printf("WIN");return 0;}
  for(i=1;i<=3;i++)
 {     
         for(j=i+1;j<5;j++)
   {   if(king[i][j]==0)continue;
    for(k=j+1;k<=5;k++)
    {
     if(king[i][k]==1&&king[j][k]==1)
     {
      printf("WIN");return 0;
     }
    }
       } 
    }
 for(i=1;i<=3;i++)
 {     
         for(j=i+1;j<5;j++)
   {   if(king[i][j]==1)continue;
    for(k=j+1;k<=5;k++)
    {
     if(king[i][k]==0&&king[j][k]==0)
     {
      printf("WIN");return 0;
     }
    }
       } 
    }
     printf("FAIL");
  return 0;
}