#include<iostream>
int p[300005];
int main()
{
 int n;std::cin>>n;
 int t,pos=-1;
 for(int i=0;i^n&&scanf("%d",&t);p[t]=i++);
 for(int i=0;i^n&&scanf("%d",&t);i++,(p[t]>pos?(printf("%d ",p[t]-pos),pos=p[t]):printf("0 ")));
}