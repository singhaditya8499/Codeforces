#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
 int a[100010];
 //int b[100010];
 int main()
{
 int n,i;
  cin>>n;
  int s1=0,s2=0,s3=0,s4=0,count=0;
  for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
   if(a[i]==4)
   s4++;
  else if(a[i]==3)
   s3++;
  else if(a[i]==2)
   s2++;
  else if(a[i]==1)
   s1++;
 }
  if(s3>=s1)
 {
  count=count+s4+s3+2*s2/4;
   if((2*s2)%4!=0)
   count=count+1;
 }
  else if(s3<s1)
 {
  count=count+s4+s3;
   s1=s1-s3;
   if((2*s2)%4==0)
  {
   count=count+(2*s2)/4;
    count=count+s1/4;
   if(s1%4!=0)
    count=count+1;
  }
   else
  {
   count=count+(2*s2)/4;
    int m=((2*s2)%4)+s1;
    count=count+m/4;
    if(m%4!=0)
    count=count+1;
  }
   }
  printf("%d\n",count);
  return 0;
  }