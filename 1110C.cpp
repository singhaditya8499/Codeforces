#include<bits/stdc++.h>
int q,a,i;
int main(){
 scanf("%d",&q);
 while(q--){
  scanf("%d",&a);
  if(!(a&(a+1))){
   for(i=2;i*i<=a;++i)if(a%i==0)break;
   if(i*i>a)puts("1");else printf("%d\n",a/i);
  }else{
   for(i=1;i<a;i=i<<1|1);printf("%d\n",i);
  }
 }
 return 0;
}