#include<bits/stdc++.h>
using namespace std;
 #define si(n) scanf("%d",&n)
#define MAX 100005
 int arr[MAX];
 int main()
{
    int n,i,j,x;
    si(n);
    for(i=1;i<=n;i++){
        j=min(i-1,n-i);
        si(x);
        x-=j;
        if(x>0)arr[x]++;
    }
    int ans=0;
    for(i=1;i<MAX;i++)
        ans=max(ans,arr[i]);
    printf("%d\n",n-ans);
     return 0;
}