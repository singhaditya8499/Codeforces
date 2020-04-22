#include<cstdio>
#include<cstring>
char s1[100007],s2[100007];
int fa[100007],f[100007],g[100007];
bool is[100007];
void maxs(int&a,int b){if(a<b)a=b;}
int main(){
 scanf("%s%s",s1+1,s2+1);
 int l1=strlen(s1+1),l2=strlen(s2+1);
 for(int i=2,j=0;i<=l2;++i){
  while(j&&s2[i]!=s2[j+1])j=fa[j];
  if(s2[i]==s2[j+1])++j;
  fa[i]=j;
 }
 for(int i=l2;i<=l1;++i){
  is[i]=1;
  for(int a=0;a<l2;++a)if(s1[i-a]!='?'&&s1[i-a]!=s2[l2-a]){
   is[i]=0;
   break;
  }
  g[i]=g[i-1];
  if(is[i]){
   f[i]=g[i-l2];
   for(int j=fa[l2];j;j=fa[j]){
    maxs(f[i],f[i-(l2-j)]);
   }
   ++f[i];
   maxs(g[i],f[i]);
  }
 }
 printf("%d",g[l1]);
 return 0;
}