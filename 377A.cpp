#include<cstdio>
int t,i,n,y,N=512;char B[262144];
void G(int i){if(t&&B[i]==88)B[i]=46,t++,G(i-N),G(i+N),G(i-1),G(i+1);}
int main(){
 for(scanf("%d%d%d",&n,&y,&t);i<n;scanf("%s",B+(++i*N)));
 for(i=0;i<N*N;i++)if(B[i]==46)B[y=i]=88,t--;
 for(G(y);t<n;printf("%s\n",B+(++t*N)));
}