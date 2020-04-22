#include<cstdio>
using namespace std;
int n,i,la,nw,fl,tp;
int main()
{
 for(scanf("%d%d",&n,&la);++i<n;la=nw,fl=tp)
  if(scanf("%d",&nw),fl>(tp=(nw>la?0:(nw<la?2:1))))return puts("NO");
 return puts("YES");
}