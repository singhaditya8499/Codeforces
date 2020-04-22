#include<cstdio>
int l,m,c,i,p,t;
char s[1000];
main(){
scanf("%d%s",&l,s);
for(i=0;i<l;i++){
if(s[i]=='_'){
if(p&&t)c++;
if(!p&&t>m)m=t;
t=0;
}
else if(s[i]=='('){
p=1;
if(t>m)m=t;
t=0;
}
else if(s[i]==')'){
p=0;
if(t)c++;
t=0;
}
else t++;
}
if(t>m)m=t;
printf("%d %d",m,c);
}